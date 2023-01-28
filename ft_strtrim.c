/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:59:05 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/28 14:53:54 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cut_start(char const *s1, char const *set)
{
	while (*(s1))
	{
		if (!ft_strchr(set, *s1))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

char	*cut_end(char *trimmed_from_beginning, char const *set)
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!trimmed_from_beginning)
		return ("");
	i = 0;
	len = ft_strlen(trimmed_from_beginning);
	while (i < len)
	{
		if (!ft_strchr(set, trimmed_from_beginning[len - i - 1]))
			break ;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (len - i) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, trimmed_from_beginning, len - i + 1);
	return (str);
}


/*
 *	Allocates with malloc() and returns a copy of
 *	{s1} with the characters specified in {set} removed
 *	from the beginning and the end of the string
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	return (cut_end(cut_start(s1, set), set));
}
