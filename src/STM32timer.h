#include <Arduino.h>
/*
TIMER 1 pins -> PA8, PA9
TIMER 2 pins -> PA0, PA1
TIMER 3 pins -> PB4, PB5
TIMER 4 pins -> PB6, PB7
*/
#ifndef STM32timer_h
#define STM32timer_h

enum selectTimer{
    TIMER1 = 1,
    TIMER2 = 2,
    TIMER3 = 3,
    TIMER4 = 4
};

class STM32timer{
    public:
    
    STM32timer(selectTimer timer);
    int getValue();

    private:
    TIM_TypeDef * tim;
};

#endif
