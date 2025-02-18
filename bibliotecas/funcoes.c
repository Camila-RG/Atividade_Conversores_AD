#include <stdio.h>
#include <stdint.h>
#include "funcoes.h"
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "hardware/pwm.h"

// inicialização do pino do BOTÃO
void setup(){
    gpio_init(BUTTON_A_PIN);
    gpio_set_dir(BUTTON_A_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_A_PIN);
}

//função para configurar o módulo PWM
void pwm_setup() {
    gpio_set_function(LED_B, GPIO_FUNC_PWM);
    uint slice_b = pwm_gpio_to_slice_num(LED_B);
    pwm_set_clkdiv(slice_b, PWM_DIVISER);
    pwm_set_wrap(slice_b, WRAP_PERIOD);
    pwm_set_gpio_level(LED_B, 100);
    pwm_set_enabled(slice_b, true);

    gpio_set_function(LED_R, GPIO_FUNC_PWM);
    uint slice_r = pwm_gpio_to_slice_num(LED_R);
    pwm_set_clkdiv(slice_r, PWM_DIVISER);
    pwm_set_wrap(slice_r, WRAP_PERIOD);
    pwm_set_gpio_level(LED_R, 100);
    pwm_set_enabled(slice_r, true);

    gpio_set_function(LED_G, GPIO_FUNC_PWM);
    uint slice_g = pwm_gpio_to_slice_num(LED_G);
    pwm_set_clkdiv(slice_g, PWM_DIVISER);
    pwm_set_wrap(slice_g, WRAP_PERIOD);
    pwm_set_gpio_level(LED_G, 100);
    pwm_set_enabled(slice_g, true);
}
