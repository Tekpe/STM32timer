#include <Arduino.h>
#include "STM32timer.h"

STM32timer::STM32timer(selectTimer timer){
    switch (timer){
        case 1:
            pinMode(PA8, INPUT_PULLUP);
            pinMode(PA9, INPUT_PULLUP);
            RCC->APB2ENR |= 0b00000100000000000;
            tim=TIM1;
            break;
        case 2:
            pinMode(PA0, INPUT_PULLUP);
            pinMode(PA1, INPUT_PULLUP);
            RCC->APB1ENR |= 0b00000000000000001;
            tim=TIM2;
            break;
        case 3:
            pinMode(PB4, INPUT_PULLUP);
            pinMode(PB5, INPUT_PULLUP);
            RCC->APB1ENR |= 0b00000000000000010;
            tim=TIM3;
            break;
        case 4:
            pinMode(PB6, INPUT_PULLUP);
            pinMode(PB7, INPUT_PULLUP);
            RCC->APB1ENR |= 0b00000000000000100;
            tim=TIM4;
            break;
        default:
            tim=NULL;
            break;
    }
    tim->CCMR1 = 0x0101;
    tim->CCER = 0x010;
    tim->SMCR = 0x03;
    tim->CR1 = 0x011;
}

int STM32timer::getValue(){
    return tim->CNT;
}
