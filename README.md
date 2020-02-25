# STM32timer

This library allows you to use STM32F103C8 timers in encoder mode.
Hardware timer counts pulses of your encoder without putting any load on MCU, all you need to do is initialize timer and read value when you need it.
To init ecternal timer use constructor:
STM32timer timerName(TIMER) 
replace TIMER with: TIMER1, TIMER2, TIMER3, TIMER4 depending on what timer you want to use.

Each hardware timer has it's own pins and they cant me changed:
TIMER1 pins -> PA8, PA9
TIMER2 pins -> PA0, PA1
TIMER3 pins -> PB4, PB5
TIMER4 pins -> PB6, PB7

Pins use internal pullup.
