/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:17:37 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/18 18:25:38 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The ft_memcpy() function copies n bytes 
	from memory area src to memory area dest.
	The memory areas must not overlap!
	Returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!(dest) && !(src))
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
