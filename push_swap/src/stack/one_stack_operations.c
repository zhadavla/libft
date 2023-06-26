#include "stack.h"

/*sa (swap a): Swap the first 2 elements at the top of the a stack.
Do nothing if there is only one or no elements.*/
void stack_swap(t_stack **stack) {
    t_stack *tmp;

    if (*stack == NULL || (*stack)->next == NULL)
        return;
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = (*stack)->next;
    (*stack)->next = tmp;

    if ((*stack)->is_a)
        write(1, "sa\n", 3);
    else
        write(1, "sb\n", 3);
}

/*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.*/
void stack_push(t_stack **stack_a, t_stack **stack_b) {
    t_stack *tmp;

    if (!*stack_b)
        return;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;

    if (!*stack_a)
        ft_lstadd_back(stack_a, tmp);
    else
        ft_lstadd_front(stack_a, tmp);

    if ((*stack_a)->is_a)
        write(1, "pa\n", 3);
    else
        write(1, "pb\n", 3);
}

/*ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.*/
void stack_rotate(t_stack **stack) {
    t_stack *tmp;

    if (*stack == NULL || (*stack)->next == NULL)
        return;
    tmp = *stack;
    *stack = (*stack)->next;
    ft_lstadd_back(stack, tmp);

    if ((*stack)->is_a)
        write(1, "ra\n", 3);
    else
        write(1, "rb\n", 3);
}

/*rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one*/
void stack_reverse_rotate(t_stack **stack) {
    t_stack *tmp;
    t_stack *last;

    tmp = *stack;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    last = tmp->next;
    tmp->next = NULL;
    last->next = *stack;
    *stack = last;

    if ((*stack)->is_a)
        write(1, "rra\n", 4);
    else
        write(1, "rrb\n", 4);
}

