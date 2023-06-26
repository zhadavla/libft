#ifndef PUSH_SWAP_STACK_H
#define PUSH_SWAP_STACK_H

#include "../push_swap.h"

typedef struct s_stack
{
    int data;
    int is_a;
    int index;
    int score; // how long does it take to
    struct s_stack *next;
} t_stack;


// utils
void print_stacks(t_stack *a, t_stack *b);
t_stack *array_to_stack(const int *array, int length);
void ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);


// operations 
void stack_reverse_rotate(t_stack **stack);
void stack_rotate(t_stack **stack);
void stack_push(t_stack **stack_a, t_stack **stack_b);
void stack_swap(t_stack **stack);
void ss(t_stack **stack_a, t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);


#endif //PUSH_SWAP_STACK_H
