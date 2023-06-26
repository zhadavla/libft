#include "../push_swap.h"
#include "../libft/libft.h"


int *chars_to_ints(char **argv, int argc) {
    int *ar = (int *) malloc(sizeof(*ar) * argc);

    for (int i = 0; i < argc; ++i) {
        ar[i] = ft_atoi(argv[i]);
    }
    return ar;
}
