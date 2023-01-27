#include "libft.h"
#include "stdio.h"
// #include "ft_strtrim.c"
// #include "ft_split.c"
#include "ft_itoa.c"
// size_t	get_size(char const *s, char c);
// void test_split(void);
void test_itoa(void);

int main(void)
{
	test_itoa();
	return (0);
}


void test_itoa(void)
{
	char str[] = "abcg";
	printf("%zu\n", get_num_of_digits(54));
	ft_itoa(45);
	ft_itoa(-45);
	ft_itoa(0);
}
// void test_split(void)
// {
// 	// const char *str =  "  split  me   please   ";
// 	const char *str1 =  "sdaf";
// 	char *string = "      split       this for   me  !       ";
// 	const char delimiter = ' ';
// 	printf("SIZE {%zu}\n", get_size(string, delimiter));
// 	char **answ = ft_split(string, delimiter);
// 	int i = 0;
// 	while (answ[i])
// 	{
// 		printf("word {%s}\n", answ[i]);
// 		i++;
// 	}
	
// }

// void test_trim(void)
// {
// 	// const char s1[] = "aabaaNNNNNNfasfNNNaaaabb";
// 	// const char s2[] = "NNNNNNfasfNNNaaaaba";
// 	const char s3[] = "aabaaaaa";
// 	const char set[] = "ab";
// 	printf("%s\n", ft_strtrim(s3, set));
// 	// char *s1 = "Hello \t  Please\n Trim me !";
// 	// char *s2 = "Hello \t  Please\n Trim me !";
// 	// char *ret = ft_strtrim(s1, " \n\t");
// 	// printf("%s\n",ret);
// 	// char *s = cut_start(s1, s2);
// 	// printf("%s\n", s);

// 	// printf("%s\n", ft_strtrim(s2, set));
// 	// printf("%s\n", ft_strtrim(s3, set));

// 	// // printf("%s\n", ft_strtrim("fffffaaacaa", "ac"));
// }