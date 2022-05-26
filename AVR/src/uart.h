#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

#define TX_PORT PORTA
#define TX_PIN 0

#define RX_PORT PORTA
#define RX_PIN 1

#define TX_BUF_SIZE 32
#define RX_BUF_SIZE 128

#define TX_BUF_LAST_POS (TX_BUF_SIZE - 1)
#define RX_BUF_LAST_POS (RX_BUF_SIZE - 1)

#define BT_EOS '\n'

#define GIE() __asm("sei")
#define GID() __asm("cli")

void uart_init(void);

uint8_t uart_send_char(uint8_t);

void uart_send_8hex(uint8_t x);

void uart_send_str(uint8_t* str, uint8_t len);

uint8_t uart_get_first_char(uint8_t* c);

void uart_get_rx_buf(uint8_t* buf, uint8_t* len);

extern volatile uint8_t rx_buf_flag;

#endif /* UART_H_INCLUDED */
