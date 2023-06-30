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

t_stack *find_by_value(t_stack *stack, int value) {
    while (stack) {
        if (value == stack->data)
            return stack;
        stack = stack->next;
    }
    return NULL;
}

t_stack *find_max_node(t_stack *stack) {
    int max_value;
    t_stack *max_node;

    max_value = find_max_value(stack);
    max_node = find_by_value(stack, max_value);
    return max_node;
}

t_stack *get_last_element(t_stack *stack) {
    while (stack->next)
        stack = stack->next;
    return stack;
}

int find_mid_value(t_stack *stack) {
    int mid_value;

    if (ft_lstsize(stack) % 2 == 0)
        mid_value = ft_lstsize(stack) / 2;
    else
        mid_value = ft_lstsize(stack) / 2 + 1;
    return mid_value;
}