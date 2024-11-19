/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateFunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:28 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 21:18:31 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*new;

	if (ft_lstsize(*lst) <= 1)
		return ;
	new = ft_lstnew((*lst)->content);
	free(*lst);
	ft_lstadd_back(lst, new);
}

void	rr(t_list **first, t_list **second)
{
	ft_printf("rr\n");
	rotate(first, 'x');
	rotate(second, 'x');
}

void	ra(t_list **lst_a)
{
	ft_printf("ra\n");
	rotate(lst_a);
}

void	rb(t_list **lst_b)
{
	ft_printf("rb\n");
	rotate(lst_b);
}
