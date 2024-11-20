/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:24:04 by abosc             #+#    #+#             */
/*   Updated: 2024/11/20 01:27:16 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) < 2)
		return ;
	temp = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	temp->next = (*lst);
	(*lst) = temp;
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a);
	swap(lst_b);
	ft_printf("ss\n");
}

void	sa(t_list **lst)
{
	ft_printf("sa\n");
	swap(lst);
}

void	sb(t_list **lst)
{
	ft_printf("sb\n");
	swap(lst);
}
