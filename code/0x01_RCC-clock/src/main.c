#include <stm32f401xe.h>

int main(void) {
    // Initialize the AHB1 system clock for GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // RM p.118

    // Main loop
    while (1) {
    }

    return 0;
}
