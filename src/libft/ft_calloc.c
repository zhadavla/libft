/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:02:18 by vzhadan           #+#    #+#             */
/*   Updated: 2023/08/16 19:16:27 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
