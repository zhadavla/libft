/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:12:18 by vzhadan           #+#    #+#             */
/*   Updated: 2023/08/16 19:16:28 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 *	Outputs the character {c} to the given file descriptor {fd}.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
