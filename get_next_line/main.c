#include "get_next_line.h"

int open_file_and_get_fd(char *filename);


int open_file_and_get_fd(char *filename);

int main(void)
{
	// printf("fsda\n");
    char    filename[] = "test.txt";
    int     fd = open_file_and_get_fd(filename);
    char    *tmp;

    tmp = get_next_line(fd);
    printf("LINE GETTED {%s}\n", tmp);
    free(tmp);
    tmp = get_next_line(fd);
    printf("LINE GETTED {%s}\n", tmp);
    free(tmp);
    tmp = get_next_line(fd);
    printf("LINE GETTED {%s}\n", tmp);
    free(tmp);
    close(fd);
    // char *s1 = ft_strdup("");
   
    // char *s2 = ft_strdup("str to join");

    // char *s3 = join(s1, s2);

    // s3 = join(s3, s2);
    // printf("%s\n", s3);
    // s3 = join(s3, s2);
    // printf("%s\n", s3);
    // free(s2);
    // free(s3);
    return (0);
}

int open_file_and_get_fd(char *filename)
{
    FILE    *fptr = fopen(filename, "r");
    int     fd = fileno(fptr);

    return (fd);
}