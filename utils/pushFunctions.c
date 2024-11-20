/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:33:56 by abosc             #+#    #+#             */
/*   Updated: 2024/11/20 01:30:31 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **first, t_list **second)
{
	t_list	*temp;

	if (!*first)
		return ;
	temp = *second;
	*second = *first;
	*first = (*first)->next;
	(*second)->next = temp;
}

void	pa(t_list **a, t_list **b)
{
	ft_printf("pa\n");
	push(a, b);
}

void	pb(t_list **a, t_list **b)
{
	ft_printf("pa\n");
	push(b, a);
}
