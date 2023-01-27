/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:09:19 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/18 16:01:10 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (*nptr && (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
			|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * sign);
}
