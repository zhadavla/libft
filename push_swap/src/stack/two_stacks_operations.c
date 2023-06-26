#include "stack.h"

/*ss : sa and sb at the same time.*/
void ss(t_stack **stack_a, t_stack **stack_b) {
    t_stack *tmp_a;
    t_stack *tmp_b;

    if (*stack_a == NULL || (*stack_a)->next == NULL
        || *stack_b == NULL || (*stack_b) == NULL)
        return;

    tmp_a = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp_a->next = (*stack_a)->next;
    (*stack_a)->next = tmp_a;

    tmp_b = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp_b->next = (*stack_b)->next;
    (*stack_b)->next = tmp_b;

    write(1, "ss\n", 3);
}

/*rr : ra and rb at the same time.*/
void rr(t_stack **stack_a, t_stack **stack_b) {
    t_stack *tmp_a;
    t_stack *tmp_b;

    if (*stack_a == NULL || (*stack_a)->next == NULL || *stack_b == NULL || (*stack_b) == NULL)
        return;
    tmp_a = *stack_a;
    *stack_a = (*stack_a)->next;
    ft_lstadd_back(stack_a, tmp_a);

    tmp_b = *stack_b;
    *stack_b = (*stack_b)->next;
    ft_lstadd_back(stack_b, tmp_b);

    write(1, "rr\n", 3);
}

/*rrr : rra and rrb at the same time.*/
void rrr(t_stack **stack_a, t_stack **stack_b) {
    t_stack *tmp_a;
    t_stack *tmp_b;
    t_stack *last_a;
    t_stack *last_b;

    if (!(*stack_a) || !((*stack_a)->next) || !(*stack_b) || !((*stack_b)->next))
        return;

    tmp_a = *stack_a;
    tmp_b = *stack_b;

    while (tmp_a->next->next != NULL)
        tmp_a = tmp_a->next;
    last_a = tmp_a->next;
    tmp_a->next = NULL;
    last_a->next = *stack_a;
    *stack_a = last_a;

    while (tmp_b->next->next != NULL)
        tmp_b = tmp_b->next;
    last_b = tmp_b->next;
    tmp_b->next = NULL;
    last_b->next = *stack_b;
    *stack_b = last_b;

    write(1, "rrr\n", 4);
}
