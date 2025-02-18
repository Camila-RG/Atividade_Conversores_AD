cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Inicializa o Pico SDK
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(PICO_BOARD pico_w CACHE STRING "Board type")

include(pico_sdk_import.cmake)

project(Atividade_Conversores_AD C CXX ASM)

# Inicializa o SDK do Raspberry Pi Pico
pico_sdk_init()

# Adiciona os arquivos executáveis
add_executable(Atividade_Conversores_AD Atividade_Conversores_AD.c bibliotecas/funcoes.c bibliotecas/ssd1306.c)

# Configura o nome e versão do programa
pico_set_program_name(Atividade_Conversores_AD "Atividade_Conversores_AD")
pico_set_program_version(Atividade_Conversores_AD "0.1")

# Habilita saída UART e USB
pico_enable_stdio_uart(Atividade_Conversores_AD 1)
pico_enable_stdio_usb(Atividade_Conversores_AD 1)

# Adiciona a biblioteca padrão pico_stdlib
target_link_libraries(Atividade_Conversores_AD pico_stdlib hardware_i2c)

# Adiciona o diretório de cabeçalhos
target_include_directories(Atividade_Conversores_AD PRIVATE bibliotecas)

# Adiciona saídas extras
pico_add_extra_outputs(Atividade_Conversores_AD)
