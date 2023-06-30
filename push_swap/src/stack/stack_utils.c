#include "stack.h"

void empty_stack(t_stack **stack) {
    if (*stack == NULL) {
        // Stack is already empty
        return;
    }

    t_stack *current = *stack;
    t_stack *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *stack = NULL; // Set the stack pointer to NULL indicating an empty stack
}


void ft_lstadd_back(t_stack **lst, t_stack *new) {
    t_stack *x;

    if (!*lst) {
        *lst = new;
        new->next = NULL;
        return;
    }
    x = *lst;
    while (x->next != NULL)
        x = x->next;

    x->next = new;
    new->next = NULL;
}

void ft_lstadd_front(t_stack **lst, t_stack *new) {
    new->next = *lst;
    *lst = new;
}

int ft_lstsize(t_stack *lst) {
    t_stack *x;
    int counter;

    x = lst;
    counter = 0;
    while (x != NULL) {
        counter++;
        x = x->next;
    }
    return (counter);
}
