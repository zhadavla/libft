#include "stack.h"

void empty_stack(t_stack** stack) {
    if (*stack == NULL) {
        // Stack is already empty
        return;
    }

    t_stack* current = *stack;
    t_stack* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *stack = NULL; // Set the stack pointer to NULL indicating an empty stack
}
