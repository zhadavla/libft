#include "logic.h"

int find_min_value(t_stack *stack) {
    int min_value;

    min_value = stack->data;
    while (stack) {
        if (min_value > stack->data)
            min_value = stack->data;
        stack = stack->next;
    }
    return min_value;
}

int find_max_value(t_stack *stack) {
    int max_value;

    max_value = stack->data;
    while (stack) {
        if (max_value < stack->data)
            max_value = stack->data;
        stack = stack->next;
    }
    return max_value;
}

