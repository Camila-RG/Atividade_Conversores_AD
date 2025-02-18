#ifndef FUNCOES_H
#define FUNCOES_H

// Definição dos pinos dos leds e botões
#define LED_G 11
#define LED_B 12
#define LED_R 13
#define BUTTON_A_PIN 5

// Definição de valores para PWM
const uint16_t WRAP_PERIOD = 4000; //valor máximo do contador - WRAP
const float PWM_DIVISER = 4.0; //divisor do clock para o PWM
const uint16_t LED_STEP = 200; //passo de incremento/decremento para o duty cycle do LED
uint16_t led_level = 200; //nível inicial do pwm (duty cycle)

// inicialização dos pinos dos componentes
void setup();

//função para configurar o módulo PWM
void pwm_setup();

#endif