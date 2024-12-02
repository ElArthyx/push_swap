/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 23:52:19 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/30 00:47:06 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexage(t_list **lst)
{
	int		i;
	int		max;
	t_list	*temp;
	t_list	*first;

	i = ft_lstsize(*lst);
	first = *lst;
	while (i > 1)
	{
		*lst = first;
		max = 0;
		while (*lst)
		{
			if ((*lst)->content > max && (*lst)->index == 0)
			{
				max = (*lst)->content;
				temp = *lst;
			}
			*lst = (*lst)->next;
		}
		temp->index = i;
		i--;
	}
}
