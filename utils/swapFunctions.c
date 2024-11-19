/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:24:04 by abosc             #+#    #+#             */
/*   Updated: 2024/11/19 03:21:43 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **lst, char x)
{
	int temp;

	if (x == 'a')
		ft_printf("sa\n");
	else if (x == 'b')
		ft_printf("sb\n");
	if (ft_lstsize(*lst) < 2)
		return ;
	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
	ft_lstprint(*lst);
}

void	double_swap(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a, 'x');
	swap(lst_b, 'x');
	ft_printf("ss\n");
}
