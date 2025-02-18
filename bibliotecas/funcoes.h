#ifndef FUNCOES_H
#define FUNCOES_H

// Definição dos pinos dos leds e botões
#define LED_G 11
#define LED_B 12
#define LED_R 13
#define BUTTON_A_PIN 5

// GPIO para eixo X, eixo Y e botão do Joystick
#define JOYSTICK_X_PIN 26
#define JOYSTICK_Y_PIN 27
#define JOYSTICK_PB 22

// Definição para comunicação I2C
#define I2C_PORT i2c1
#define I2C_SDA 14
#define I2C_SCL 15
#define endereco 0x3C

// Definição de valores para PWM
extern const uint16_t WRAP_PERIOD;
extern const float PWM_DIVISER;
extern const uint16_t LED_STEP;
extern uint16_t led_level;

// inicialização dos pinos dos componentes
void setup();

//função para configurar o módulo PWM
void pwm_setup();

void adc_setup();

#endif