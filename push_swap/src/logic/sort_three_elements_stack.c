#include "logic.h"

int is_not_sorted(t_stack *stack) {
    while (stack != NULL) {
        if (stack->data > stack->next->data)
            return (true);
        stack = stack->next;
    }
    return (false);
}

// sort three elements stack
void sort_three(t_stack **stack_a) {
    if (is_not_sorted(*stack_a)) {
        if ((*stack_a)->data == find_min_value(*stack_a)) {
            stack_reverse_rotate(stack_a, 0);
            stack_swap(stack_a, 0);
        } else if ((*stack_a)->data == find_max_value(*stack_a)) {
            stack_rotate(stack_a, 0);
            if (is_not_sorted(*stack_a))
                stack_swap(stack_a, 0);
        } else {
            if (((*stack_a)->next->data) == find_min_value(*stack_a))
                stack_swap(stack_a, 0);
            else
                stack_swap(stack_a, 0);
        }
    }
}