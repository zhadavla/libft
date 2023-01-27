/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:02:18 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/18 18:23:39 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
