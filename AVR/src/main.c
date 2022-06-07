#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <string.h>

#include "definitions.h"
#include "definitions.h"
#include "uart.h"

#include "classify.h"
#include "test_data.h"


#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"


void init_timer(void) {
    TCB2.CTRLA = TCB_CLKSEL_CLKDIV2_gc;         // divide clock by 2
    TCB2.CTRLB = TCB_CNTMODE_INT_gc;            // single shot
    TCB2.EVCTRL = TCB_CAPTEI_bm | TCB_EDGE_bm;
    TCB2.CCMP = 50000;
    TCB2.INTCTRL = TCB_CAPT_bm;                 // capture
}

volatile int timer = 0;

ISR(TCB2_INT_vect)
{
    TCB2.INTFLAGS = TCB_CAPT_bm; /* Clear the interrupt flag */
    
    timer++;
    if (timer == 40) {
        timer = 0;
        PORTC.OUTCLR = RED | GREEN | BLUE;
        TCB2.CTRLA &= ~TCB_ENABLE_bm;
    }
}

void start_timer(void) {
    TCB2.CTRLA |= TCB_ENABLE_bm;
}


void sleep(uint16_t delay) {
    uint16_t i;
    while(delay) {
        delay--;
        i = 2000;
        while(i) {
            __asm("nop");
            i--;
        }
    }
}


void run_classify(complex* fft, int rate) {
    uint8_t cls = classify(fft, rate);
    if (cls == 0) {
        return;
    }


    start_timer();
}


int main(void)
{
    CPU_CCP = CCP_IOREG_gc;
    sleep(200);

    PORTC.DIRSET = RED | GREEN | BLUE;

    init_timer();
    GIE();

    run_classify(TEST_DATA, TEST_DATA_RATE);

    while(1) {
        sleep(1);
    }
}
#pragma clang diagnostic pop
