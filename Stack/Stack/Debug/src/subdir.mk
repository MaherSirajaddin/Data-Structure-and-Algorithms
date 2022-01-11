################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/chk_balance.c \
../src/main.c \
../src/stack_array.c 

OBJS += \
./src/chk_balance.o \
./src/main.o \
./src/stack_array.o 

C_DEPS += \
./src/chk_balance.d \
./src/main.d \
./src/stack_array.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/maher/eclipse-workspace/Stack/headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


