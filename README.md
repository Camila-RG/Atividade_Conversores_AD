# Atividade - Controle de Joystick e LEDs RGB com Raspberry Pi Pico

Este repositório apresenta a resolução da atividade de controle de LEDs RGB e exibição gráfica em um display OLED utilizando um joystick, com base na utilização do Raspberry Pi Pico W. O projeto implementa controle de brilho via PWM, movimentação gráfica no display SSD1306 e uso de interrupções para os botões, seguindo requisitos específicos.

## Componentes utilizados
- Raspberry Pi Pico
- Joystick analógico (conectado aos GPIOs 26 e 27)
- LED RGB (conectado aos GPIOs 11, 12 e 13)
- Display OLED SSD1306 (conectado via I2C nos GPIOs 14 e 15)
- Botões:
  - Botão do Joystick (conectado ao GPIO 22)
  - Botão A (conectado ao GPIO 5)
- Kit de Desenvolvimento BitDogLab
- VS Code
- Wokwi (simulação)
- Linguagem C

## Como utilizar?
### Configuração do Ambiente de Desenvolvimento:
1. Instale um compilador para C/C++ (Ex.: GCC).
2. Instale as extensões necessárias na sua IDE (Ex.: VS Code):
   - C/C++
   - Raspberry Pi Pico SDK

### Utilização deste projeto:
Com o ambiente configurado, você pode baixar este repositório ou cloná-lo na sua IDE utilizando o Git. Certifique-se de que o Git esteja instalado antes de prosseguir.

sh
git clone [https://github.com/Camila-RG/Atividade_Conversores_AD.git]


1. Abra a pasta Projeto_Joystick_LED na sua IDE.
2. Compile o código na aba do Raspberry Pi Pico e envie para a placa.
3. Caso não tenha um Raspberry Pi Pico, utilize o simulador Wokwi para testar.

## Funcionamento
### Controle dos LEDs RGB via Joystick
- LED Azul (GPIO 13):
  - Controlado pelo eixo Y do joystick.
  - No centro (2048), o LED está apagado.
  - Movendo para cima ou para baixo, o brilho aumenta até o máximo nos extremos (0 e 4095).

- LED Vermelho (GPIO 11):
  - Controlado pelo eixo X do joystick.
  - No centro (2048), o LED está apagado.
  - Movendo para esquerda ou direita, o brilho aumenta até o máximo nos extremos (0 e 4095).

- LED Verde (GPIO 12):
  - Alterna entre ligado e desligado ao pressionar o botão do joystick.

### Controle Gráfico no Display OLED SSD1306
- Um quadrado de 8x8 pixels é exibido no centro da tela (128x64 pixels).
- O quadrado se move proporcionalmente aos valores do joystick nos eixos X e Y.
- Ao pressionar o botão do joystick, a borda do display muda de estilo.

### Função do Botão A (GPIO 5)
- Liga ou desliga os LEDs RGB a cada acionamento.

## Interrupções e Debouncing
- Todas as funcionalidades relacionadas aos botões utilizam interrupções (IRQ).
- Implementado debouncing via software para evitar acionamentos múltiplos indesejados.

## Vídeo Demonstrativo
Você pode assistir ao vídeo demonstrativo do projeto clicando no link abaixo:

[Vídeo explicativo do projeto]()

## Autor
Camila Gomes
