################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Binary_Heap.c \
../src/DataStructure_Package.c \
../src/LinkedList.c \
../src/Stack.c 

OBJS += \
./src/Binary_Heap.o \
./src/DataStructure_Package.o \
./src/LinkedList.o \
./src/Stack.o 

C_DEPS += \
./src/Binary_Heap.d \
./src/DataStructure_Package.d \
./src/LinkedList.d \
./src/Stack.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


