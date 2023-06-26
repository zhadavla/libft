#ifndef PUSH_SWAP_STACK_H
#define PUSH_SWAP_STACK_H

#include <stdlib.h>
    typedef struct s_stack
    {
        int data;
        int index;
        int score; // how long does it take to
        struct s_stack *next;
    } t_stack;


t_stack *create_stack(int data);
void push(t_stack **stack, int data);
int pop(t_stack **stack);

#endif //PUSH_SWAP_STACK_H
