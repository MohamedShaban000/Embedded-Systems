################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Keypad/keypad.c 

OBJS += \
./HAL/Keypad/keypad.o 

C_DEPS += \
./HAL/Keypad/keypad.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Keypad/%.o HAL/Keypad/%.su: ../HAL/Keypad/%.c HAL/Keypad/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"F:/Git_Hub/Embedded-Systems/Embedded-Systems/Drivers/STM32F103C6/HAL/HAL_Includes" -I"F:/Git_Hub/Embedded-Systems/Embedded-Systems/Drivers/STM32F103C6/MCAL/MCAL_Includes" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-Keypad

clean-HAL-2f-Keypad:
	-$(RM) ./HAL/Keypad/keypad.d ./HAL/Keypad/keypad.o ./HAL/Keypad/keypad.su

.PHONY: clean-HAL-2f-Keypad

