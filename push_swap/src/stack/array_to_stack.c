#include "stack.h"

t_stack *array_to_stack(const int *array, int length) {
    t_stack *top = NULL;

    for (int i = 0; i < length; i++) {
        t_stack *new_element = (t_stack *) malloc(sizeof(t_stack));
        new_element->data = array[i];
        new_element->index = i;
        new_element->score = 0;

        new_element->next = top;
        top = new_element;
    }

    return top;
}

