#include "libft.h"
#include "stdio.h"
// #include "ft_strtrim.c"
// #include "ft_split.c"
// #include "ft_itoa.c"
// size_t	get_size(char const *s, char c);
// void test_split(void);
// void test_itoa(void);
void	test_lstclear(void);
// #include "ft_lstclear.c"
#include <string.h>	

t_list			*lstnew(void *d) {
	t_list *ret = malloc(sizeof(t_list));

	if (!ret)
		return (NULL);
	ret->next = NULL;
	ret->content = d;
	return (ret);
}

int main(void)
{
	test_lstclear();
	return (0);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current->next;
		printf("%s\n", current->content);
		ft_lstdelone(current, del);
		// printf("%s\n", current->content);
		current = next;
	}
	*lst = NULL;
}

void	lstdelone_f(void *str)
{
	free(str);
}

void	test_lstclear(void)
{
	t_list	*l = lstnew(strdup("nyancat"));

	l->next = lstnew(strdup("#TEST#"));
	ft_lstclear(&l, &lstdelone_f);

}

// void test_itoa(void)
// {
// 	char str[] = "abcg";
// 	printf("%zu\n", get_num_of_digits(54));
// 	ft_itoa(45);
// 	ft_itoa(-45);
// 	ft_itoa(0);
// }
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