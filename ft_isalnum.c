/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:20:58 by vzhadan           #+#    #+#             */
/*   Updated: 2023/01/17 19:33:41 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function that checks for an alphanumeric character
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
