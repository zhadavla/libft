#ifndef PUSH_SWAP_STACK_H
#define PUSH_SWAP_STACK_H

#include "../push_swap.h"

typedef struct s_stack
{
    int data;
    int index;
    int score; // how long does it take to
    struct s_stack *next;
} t_stack;

void print_stacks(t_stack *a, t_stack *b);
t_stack *array_to_stack(const int *array, int length);
#endif //PUSH_SWAP_STACK_H
