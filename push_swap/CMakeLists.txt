project(push_swap C)

set(CMAKE_C_STANDARD 11)

add_executable(push_swap main.c src/stack/stack.h src/stack/stack_utils.c)
