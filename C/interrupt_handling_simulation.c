#include <stdio.h>
#include <unistd.h>  // For sleep() function

int interrupt_flag = 0;  // Global flag to simulate interrupt

// Interrupt handler function
void interrupt_handler() {
    printf("Interrupt occurred! Handling interrupt...\n");
    interrupt_flag = 0;  // Reset the flag
}

// Main function to simulate interrupt handling
void main_loop() {
    while (1) {
        if (interrupt_flag) {
            interrupt_handler();  // Call interrupt handler
        }
        printf("Main loop running...\n");
        sleep(1);  // Simulate work being done
    }
}

// Function to simulate interrupt triggering
void trigger_interrupt() {
    interrupt_flag = 1;  // Set the interrupt flag
}

int main() {
    // Start main loop in a separate thread or process
    main_loop();

    // Trigger interrupt after 5 seconds for testing
    sleep(5);
    trigger_interrupt();

    return 0;
}
