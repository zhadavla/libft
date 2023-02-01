/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:55:47 by vzhadan           #+#    #+#             */
/*   Updated: 2023/02/01 18:49:22 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 *	Allocates with malloc() and returns a new
 *	string, which is the result of the concatenation
 *	of {s1} and {s2}. !More efficient implementation!
*/
char		*ft_strjoin(char *unfinished_line, char *buffer)
{
	char	*copy;
	size_t	i;
	size_t	j;
	
	copy = (char *)malloc(sizeof(char) * (ft_strlen(unfinished_line) + ft_strlen(buffer) + 1));
	i = 0;
	while (unfinished_line[i])
	{
	    copy[i] = unfinished_line[i]; 	
		i ++;
	}
	j = 0;
	while (buffer[j])
		copy[i++] = buffer[j++];
	copy[i] = 0;
	free(unfinished_line);
	return (copy);
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

