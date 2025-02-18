#include <stdio.h>
#include <stdint.h>
#include <hardware/adc.h>
#include "funcoes.h"
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "hardware/pwm.h"
#include "ssd1306.h"


// inicialização do pino do botão e joystick
void setup(){
    gpio_init(BUTTON_A_PIN);
    gpio_set_dir(BUTTON_A_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_A_PIN);

    gpio_init(JOYSTICK_PB);
    gpio_set_dir(JOYSTICK_PB, GPIO_IN);
    gpio_pull_up(JOYSTICK_PB); 

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

void adc_setup(){
    i2c_init(I2C_PORT, 400 * 1000);

    gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA);
    gpio_pull_up(I2C_SCL);
    ssd1306_t ssd; // Inicializa a estrutura do display
    ssd1306_init(&ssd, WIDTH, HEIGHT, false, endereco, I2C_PORT); // Inicializa o display
    ssd1306_config(&ssd); // Configura o display
    ssd1306_send_data(&ssd); // Envia os dados para o display

    // Limpa o display. O display inicia com todos os pixels apagados.
    ssd1306_fill(&ssd, false);
    ssd1306_send_data(&ssd);

    adc_init();
    adc_gpio_init(JOYSTICK_X_PIN);
    adc_gpio_init(JOYSTICK_Y_PIN);  

    uint16_t adc_value_x;
    uint16_t adc_value_y;  
    char str_x[5];  // Buffer para armazenar a string
    char str_y[5];  // Buffer para armazenar a string  
}