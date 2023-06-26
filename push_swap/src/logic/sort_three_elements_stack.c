#include "logic.h"

/* function to check if the stack is sorted,
if it is sorted then it returns 0, else 1*/
int is_not_sorted(t_stack *stack) {
    while (stack != NULL) {
        if (stack->data > stack->next->data)
            return (true);
        stack = stack->next;
    }
    return (false);
}

/* function that sorts when there are only three elements left in stack A */
void sort_three(t_stack **stack_a) {
    if (is_not_sorted(*stack_a)) {
        if ((*stack_a)->data == find_min_value(*stack_a)) {
            stack_reverse_rotate(stack_a);
            stack_swap(stack_a);
        } else if ((*stack_a)->data == find_max_value(*stack_a)) {
            stack_rotate(stack_a);
            if (is_not_sorted(*stack_a))
                stack_swap(stack_a);
        } else {
            if (((*stack_a)->next->data) == find_min_value(*stack_a))
                stack_swap(stack_a);
            else
                stack_swap(stack_a);
        }
    }
}