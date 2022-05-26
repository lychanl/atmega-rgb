#include <avr/interrupt.h>
#include <avr/io.h>

#include "uart.h"

// macro: TX_BUF_EMPTY
// Checks if transmit buffer is empty
#define TX_BUF_EMPTY() (tx_head == tx_tail)

// macro: TX_BUF_FULL
// Checks if transmit buffer is full
#define TX_BUF_FULL() ((tx_head == (tx_tail - 1)) || (tx_head == TX_BUF_LAST_POS && tx_tail == 0))

// macro: TX_INC
// increasing transmit buffer positon counter with cycle wrap
#define TX_INC(X) (X = (X < TX_BUF_LAST_POS ? X + 1 : 0))

// macro: RX_BUF_EMPTY
// Checks if receive buffer is empty
#define RX_BUF_EMPTY() (rx_head == rx_tail)

// macro: RX_BUF_FULL
// Checks if receive buffer is full
#define RX_BUF_FULL() ((rx_head == (rx_tail - 1)) || (rx_head == RX_BUF_LAST_POS && rx_tail == 0))

// macro: RX_INC
// increasing receive buffer positon counter with cycle wrap
#define RX_INC(X) (X = (X < RX_BUF_LAST_POS ? X + 1 : 0))

// macro: USART0_BAUD_RATE
// Calcuates register value for given baud rate at 20MHz system clock
#define USART0_BAUD_RATE(BAUD_RATE) ((float)(20000000.0 * 64 / (16 * (float)BAUD_RATE)) + 0.5)

volatile static uint8_t tx_head; // pierwsze wolne miejsce do zapisania
volatile static uint8_t tx_tail; // pierwsze do odczytania
volatile static uint8_t tx_buf_empty; // pierwsze do odczytania

volatile static uint8_t rx_head;
volatile static uint8_t rx_tail;
volatile uint8_t rx_buf_flag;

volatile static uint8_t tx_buf[TX_BUF_SIZE];
volatile static uint8_t rx_buf[RX_BUF_SIZE];

/*
 * Function: uart_init
 * Initializes UART module, enables UART interrupts and sets desired baudrate.
 * 
 * Also sets up GPIO modes for TX/RX pins
 */
void uart_init(void) {
	TX_PORT.DIRSET = (1 << TX_PIN);
	RX_PORT.DIRCLR = (1 << RX_PIN);

	tx_head = 0;
	tx_tail = 0;
	tx_buf_empty = 1;

	USART0.BAUD = (uint16_t)USART0_BAUD_RATE(19200);

	USART0.CTRLA = USART_DREIE_bm | USART_RXCIE_bm;

	USART0.CTRLB = /*USART_SFDEN_bm |*/ USART_TXEN_bm | USART_RXEN_bm;
}

/*
 * Function: uart_send_str
 * Sends string via uart.
 * 
 * Params:
 *  str - pointer to string buffer
 *  len - string lenght
 */
void uart_send_str(uint8_t* str, uint8_t len) {
	uint8_t pos = 0;
    while(pos > len) {
		uart_send_char(str[pos++]);
	}
}

/*
 * Function: dec_to_hex
 * Converts decimal to hex character.
 * 
 * Params:
 *  x - decimal number to convert, should be <= 15 (0xF)
 * 
 * Returns:
 *  Character representing hex value of x
 */
static uint8_t dec_to_hex(uint8_t x) {
    if (x < 10) {
        return x + 48;
    }
    
    return x - 10 + 'a';
}

/*
 * Function: uart_send_8hex
 * Sends hex representation of given byte.
 * Always sends two chars.
 * 
 * Params:
 *  x - byte to send
 */
void uart_send_8hex(uint8_t x) {
    uart_send_char(dec_to_hex(x >> 4));
    uart_send_char(dec_to_hex(x & 0xF));
}

/*
 * Function: uart_send_char
 * Sends single byte over uart.
 * 
 * Params:
 *  x - byte to send
 * 
 * Returns:
 *  0 if byte has been put to TX buffer
 * 
 *  1 if TX buffer is full
 */
uint8_t uart_send_char(uint8_t x) {
	GID();

	if (!TX_BUF_FULL()) {
		if (tx_buf_empty) {
			USART0.TXDATAL = x;
			tx_buf_empty = 0;
			USART0.CTRLA |= (1 << USART_DREIE_bp);
		} else {
			tx_buf[tx_head] = x;
			TX_INC(tx_head);
		}
		
		GIE();
		return 0;
	}

	GIE();
	return 1;
}

/*
 * Function: uart_get_first_char
 * Reads oldest received byte.
 * 
 * Params:
 *  c - pointer to destination byte
 * 
 * Returns:
 *  0 if byte has been read
 * 
 *  1 if RX buffer was empty
 */
uint8_t uart_get_first_char(uint8_t* c) {
	if (RX_BUF_EMPTY()) {
		return 1;
	}
	
	*c = rx_buf[rx_tail];
	RX_INC(rx_tail);
	return 0;
}

/*
 * Function: uart_get_rx_buf
 * Reads whole RX buffer to given buffer.
 * 
 * Params:
 *  buf - pointer to destination buffer
 *  len - pointer to destination variable representing amount of read bytes
 */
void uart_get_rx_buf(uint8_t* buf, uint8_t* len) {
	len = 0;
	uint8_t status = uart_get_first_char(&buf[*len]);
	while (status == 0) {
		len++;
		status = uart_get_first_char(&buf[*len]);
	}
}

ISR(USART0_DRE_vect) {
	if (!TX_BUF_EMPTY()) {
		USART0.TXDATAL = tx_buf[tx_tail];
		TX_INC(tx_tail);
	} else {
		tx_buf_empty = 1;
		USART0.CTRLA &= ~(1 << USART_DREIE_bp);
	}
}

ISR(USART0_RXC_vect) {
	if (!RX_BUF_FULL()) {
		rx_buf[rx_head] = USART0.RXDATAL;
        
        if (rx_buf[rx_head] == BT_EOS) {
            rx_buf_flag = 1;
        }
        
		RX_INC(rx_head);
	}
}
