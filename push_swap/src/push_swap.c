#include "push_swap.h"
#include "stack/stack.h"
#include "libft/libft.h"

int main(int argc, char **argv) {
    int *ar1 = chars_to_ints(argv, argc);
    int ar2[] = {5, 4, 3, 2, 1};


    t_stack *a = array_to_stack(ar1, 5);
    t_stack *b = array_to_stack(ar2, 5);
    print_stacks(a, b);
    return 0;
}