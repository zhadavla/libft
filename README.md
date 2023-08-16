## libft
This is my implementation of the 42 school's libft library, which includes functions like ft_printf and get_next_line. You can find a detailed description in the dedicated folder.

To generate the libft.a file, simply run the command make. libft.a is a static library designed for Unix-like operating systems. A static library comprises compiled object code files that can be linked into an executable program during the compilation process. These files contain precompiled functions that can be utilized across multiple programs.

You can create a main.c file as follows:
``` C
#include "includes/libft.h"

int main(void)
{
  ft_printf("Hello %%42d\n", 42);
  return (0);
}
```
Compile the main.c file using ```cc -L. main.c -lft``` This compilation should result in an **a.out** file, which will produce the same output as the original printf function from <stdio.h> would 😺. This strategy should be applicable to all functions prototyped in the includes/*.h files.
