################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/GPIO/gpio.c 

OBJS += \
./MCAL/GPIO/gpio.o 

C_DEPS += \
./MCAL/GPIO/gpio.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/GPIO/%.o MCAL/GPIO/%.su: ../MCAL/GPIO/%.c MCAL/GPIO/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"F:/Git_Hub/Embedded-Systems/Embedded-Systems/Drivers/STM32F103C6/HAL/HAL_Includes" -I"F:/Git_Hub/Embedded-Systems/Embedded-Systems/Drivers/STM32F103C6/MCAL/MCAL_Includes" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-MCAL-2f-GPIO

clean-MCAL-2f-GPIO:
	-$(RM) ./MCAL/GPIO/gpio.d ./MCAL/GPIO/gpio.o ./MCAL/GPIO/gpio.su

.PHONY: clean-MCAL-2f-GPIO

