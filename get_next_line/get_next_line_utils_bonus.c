/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:55:47 by vzhadan           #+#    #+#             */
/*   Updated: 2023/02/07 14:11:45 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 *	Allocates with malloc() and returns a new
 *	string, which is the result of the concatenation
 *	of {s1} and {s2}. !More efficient implementation!
*/
char	*ft_strjoin(char *str1, char *str2)
{
	char	*copy;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	copy = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	while (str1[i])
	{
		copy[i] = str1[i];
		i ++;
	}
	j = 0;
	while (str2[j])
		copy[i++] = str2[j++];
	copy[i] = '\0';
	free(str1);
	return (copy);
}

/*
 *	Makes {n} values of pointer {s} equal to zero
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*(p++) = 0;
}

/*
 *	Allocates the requested memory and returns a pointer to it.
 *	Sets allocated memory to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	p = NULL;
	p = (char *)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * nmemb);
	return (p);
}

/*
 *	Finds len of string pointed by {s}
*/
size_t	ft_strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}

/*
 * 	Searches for the first occurrence of the character {c} (an unsigned char) 
 *	in the string pointed to by the argument {s}.
*/
char	*ft_strchr(const char *s, int c)
{
	if (*s == (char )c)
		return ((char *)s);
	while (*(s++))
		if (*(char *)s == (char )c)
			return ((char *)s);
	return (NULL);
}
