project(push_swap C)

set(CMAKE_C_STANDARD 11)

add_executable(push_swap src/stack/stack.h
        src/stack/stack_utils.c src/push_swap.c
        src/libft/chars_to_ints.c src/push_swap.h
        src/libft/ft_atoi.c src/libft/libft.h
        src/stack/print_stack.c src/stack/print_stack.c
        src/stack/print_stack.c src/stack/array_to_stack.c src/libft/ft_itoa.c src/libft/ft_strdup.c src/libft/ft_strlen.c src/stack/one_stack_operations.c src/stack/stack_operation_b.c src/stack/two_stacks_operations.c)
