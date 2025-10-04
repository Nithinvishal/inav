#include "platform.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM5, CH1, PA0, TIM_USE_MOTOR, 0, 0), // Motor 1
    DEF_TIM(TIM5, CH2, PA1, TIM_USE_MOTOR, 0, 0), // Motor 2
    DEF_TIM(TIM5, CH3, PA2, TIM_USE_MOTOR, 0, 0), // Motor 3
    DEF_TIM(TIM5, CH4, PA3, TIM_USE_MOTOR, 0, 0), // Motor 4
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
