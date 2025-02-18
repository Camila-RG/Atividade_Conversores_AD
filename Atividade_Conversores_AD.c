#include <stdio.h>
#include "pico/stdlib.h"
#include "funcoes.h"
#include "ssd1306.h"

//Valores para PWM
const uint16_t WRAP_PERIOD = 4000; //valor máximo do contador - WRAP
const float PWM_DIVISER = 4.0; //divisor do clock para o PWM
const uint16_t LED_STEP = 200; //passo de incremento/decremento para o duty cycle do LED
uint16_t led_level = 200; //nível inicial do pwm (duty cycle)

int main()
{
    stdio_init_all();
    pwm_setup();
    setup();

    while (true) {

    }
}
