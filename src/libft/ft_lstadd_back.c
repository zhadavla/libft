/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:48:11 by vzhadan           #+#    #+#             */
/*   Updated: 2023/08/16 19:16:28 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 *	 Adds the node ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
