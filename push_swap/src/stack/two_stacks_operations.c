#include "stack.h"

/*ss : sa and sb at the same time.*/
void ss(t_stack **stack_a, t_stack **stack_b) {

    stack_swap(stack_a, false);
    stack_swap(stack_b, false);
    write(1, "ss\n", 3);
}

/*rr : ra and rb at the same time.*/
void rr(t_stack **stack_a, t_stack **stack_b) {
    stack_rotate(stack_a, false);
    stack_rotate(stack_b, false);
    write(1, "rr\n", 3);
}

/*rrr : rra and rrb at the same time.*/
void rrr(t_stack **stack_a, t_stack **stack_b) {
    stack_reverse_rotate(stack_a, false);
    stack_reverse_rotate(stack_b, false);
    write(1, "rrr\n", 4);
}
