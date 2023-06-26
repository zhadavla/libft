#include <stdio.h>
#include "stack.h"
#include "../libft/libft.h"

void print_stacks(t_stack *a, t_stack *b) {
    printf("a:       b:\n");
    while (a != NULL && b != NULL) {
        char *a_data = a->data ? ft_itoa(a->data) : " ";
        char *b_data = b->data ? ft_itoa(b->data) : " ";
        printf("%s        %s\n", a_data, b_data);
        a = a->next;
        b = b->next;
    }
}