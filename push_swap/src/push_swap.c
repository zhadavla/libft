#include <stdio.h>
#include <string.h>
#include "push_swap.h"
#include "libft/libft.h"


void print_array(int *ar){
    for (int i = 0; i < 5; ++i) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int *ar1 = chars_to_ints(argv, argc);

    t_stack *a = array_to_stack_backward(ar1, argc - 1, true);
    t_stack *b = NULL;

    execute_command(a, b);
    print_stacks(a, b);

    return 0;
}