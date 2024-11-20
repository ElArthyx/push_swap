/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:33:56 by abosc             #+#    #+#             */
/*   Updated: 2024/11/20 02:12:51 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **first, t_list **second)
{
	t_list	*temp;

	if (!(*first))
		return ;
	temp = (*first)->next;
	(*first)->next = *second;
	*second = (*first);
	(*first = temp);
}

void	pa(t_list **a, t_list **b)
{
	ft_printf("pa\n");
	push(b, a);
}

void	pb(t_list **a, t_list **b)
{
	ft_printf("pa\n");
	push(a, b);
}
