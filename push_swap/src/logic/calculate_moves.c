#include "logic.h"

int find_index_in_b(t_stack *b, int value) {
    int index;

    if (value < find_min_value(b) || value > find_max_value(b)) {
        index = find_max_node(b)->index;
    } else {
        if (value < get_last_element(b)->data && value > b->data)
            return 0;
        else {
            index = 1;
            while (b->next != NULL
                   && !(value < b->data && value > b->next->data)) {
                index++;
                b = b->next;
            }
        }
    }
    return index;
}

int find_score(t_stack *stack_a, t_stack *stack_b) {
    int score_a;
    int score_b;
    int index_in_b;

    score_a = 0;
    score_b = 0;
    index_in_b = find_index_in_b(stack_b, stack_a->data);
    if (stack_a->index < find_mid_value(stack_a)) // if the element is in the first half of the stack
        score_a += stack_a->index; // number of permutations to get the element to the top
    else
        score_a += ft_lstsize(stack_a) - stack_a->index;
    if (index_in_b < find_mid_value(stack_b)) // if the element is in the first half of the stack
        score_b += index_in_b;
    else
        score_b += ft_lstsize(stack_b) - index_in_b;
    if ((stack_a->index < find_mid_value(stack_a) && index_in_b < find_mid_value(stack_b)) // rotate both stacks
        || (stack_a->index > find_mid_value(stack_a) && index_in_b > find_mid_value(stack_b))) {
        if (stack_a->index < index_in_b)
            score_a = 0;
        else
            score_b = 0;
    }
    return (score_a + score_b + 1);
}

t_stack *find_lowest_score(t_stack *stack) {
    t_stack *lowest_score;
    t_stack *current;

    lowest_score = stack;
    current = stack->next;
    while (current) {
        if (stack->score == 1)
            return stack;
        if (current->score < lowest_score->score)
            lowest_score = current;
        current = current->next;
    }
    return lowest_score;
}

//void sort(t_stack **stack_a, t_stack **stack_b) {
//    t_stack *lowest_score;
//    int index_in_b;
//
//    while (*stack_a) {
//        lowest_score = *stack_a;
//        while (lowest_score) {
//            lowest_score->score = find_score(lowest_score, *stack_b);
//            lowest_score = lowest_score->next;
//        }
//        lowest_score = find_lowest_score(*stack_a);
//        index_in_b = find_index_in_b(*stack_b, lowest_score->data);
//        if (lowest_score->index < find_mid_value(*stack_a)) {
//            while ((*stack_a)->data != lowest_score->data) {
//                if (index_in_b < find_mid_value(*stack_b)) {
//                    stack_reverse_rotate(NULL, 0)
//                    rotate(stack_a, stack_b, "rr");
//                    ft_putstr_fd("rr\n", 1);
//                } else {
//                    rotate(stack_a, stack_b, "ra");
//                    ft_putstr_fd("ra\n", 1);
//                }
//            }
//        } else {
//            while ((*stack_a)->data != lowest_score->data) {
//                if (index_in_b < find_mid_value(*stack_b)) {
//                    reverse_rotate(stack_a, stack_b, "rrr");
//                    ft_putstr_fd("rrr\n", 1);
//                } else {
//                    reverse_rotate(stack_a, stack_b, "rra");
//                    ft_putstr_fd("rra\n", 1);
//                }
//            }
//        }
//        push(stack_a, stack_b, "pb");
//        ft_putstr_fd("pb\n", 1);
//    }
//    while (*stack_b) {
//        push(stack_a, stack_b, "pa");
//        ft_putstr_fd("pa\n", 1);
//    }
//}