/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:24:04 by abosc             #+#    #+#             */
/*   Updated: 2024/11/19 21:54:40 by alegrix          ###   ########.fr       */
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
	swap(lst_a, 'x');
	swap(lst_b, 'x');
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
