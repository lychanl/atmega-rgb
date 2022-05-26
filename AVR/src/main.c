#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <string.h>

#include "uart.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
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


int main(void)
{
    CPU_CCP = 0xD8;
    CLKCTRL.MCLKCTRLB = 0;

    sleep(200);

//     adc_gpio_setup();
//     adc_init();

//    TCA0.SINGLE.PER = PWM_CYCLES;
    TCA0.SINGLE.CTRLA |= TCA_SINGLE_CLKSEL_DIV4_gc;
    TCA0.SINGLE.CMP0 = 1;
    TCA0.SINGLE.CMP1 = 1;
    TCA0.SINGLE.CMP2 = 1;
    TCA0.SINGLE.CTRLB |= TCA_SINGLE_CMP0EN_bm | TCA_SINGLE_CMP1EN_bm | TCA_SINGLE_CMP2EN_bm | TCA_SINGLE_WGMODE_SINGLESLOPE_gc;
//     TCA0.SINGLE.CTRLA |= TCA_SINGLE_ENABLE_bm;

    TCB0.CTRLA |= TCB_CLKSEL_CLKDIV2_gc;
    TCB0.CCMP = 10000;
    TCB0.INTCTRL = TCB_CAPT_bm;
//     TCB0.CTRLA |= TCB_ENABLE_bm;

//    PORTB.DIRSET = 0b1111;
//    PORTB.DIRCLR = (1<<5) | (1<<6);
//    PORTB.OUTCLR = (1<<3);
//    PORTB.OUTSET = (1<<2);
//    PORTB.OUTTGL = (1<<1);
    PORTC.DIRSET = (1<<0) | (1<<1);
    GIE();

    sleep(100);

    while(1) {
        PORTC.OUTSET = (1<<0);
        PORTC.OUTCLR= (1<<1);
        sleep(500);
        PORTC.OUTSET = (1<<1);
        PORTC.OUTCLR = (1<<0);
        sleep(500);

    }

//     ADC_0_start_conversion(curr_adc_pin);
}
#pragma clang diagnostic pop

ISR(TCB0_INT_vect) {
        TCB0.INTFLAGS = TCB_CAPT_bm;
//         timer++;
}

