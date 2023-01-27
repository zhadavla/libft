/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:38:02 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/18 18:01:57 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_of_needle;
	size_t	i;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	if (!n)
		return (NULL);
	len_of_needle = ft_strlen(needle);
	while (i < n)
	{
		if (!(*haystack) || (len_of_needle > n - i))
			return (NULL);
		if (!ft_strncmp(haystack, needle, len_of_needle))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
