#ifndef PUSH_SWAP_LOGIC_H
#define PUSH_SWAP_LOGIC_H

#include "../stack/stack.h"

// always keep b sorted in desc order, but the lowest value may be just before the highest

int find_min_value(t_stack *stack);
int find_max_value(t_stack *stack);
int find_by_index(t_stack *stack, int data);
t_stack *find_by_value(t_stack *stack, int value);
t_stack *find_max_node(t_stack *stack);
t_stack *get_last_element(t_stack *stack);

#endif //PUSH_SWAP_LOGIC_H
