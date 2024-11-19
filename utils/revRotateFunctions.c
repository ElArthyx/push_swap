/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotateFunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:41 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 21:22:00 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*new;
	
	if (ft_lstsize(*lst) <= 1)
		return ;
	new = ft_lstnew((*lst)->content);
	ft_lstadd_front(lst, new);
	free(ft_lstlast(*lst));
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	ft_printf("rrr\n");
	reverse_rotate(lst_a);
	reverse_rotate(lst_b);
}

void	rra(t_list **lst_a)
{
	ft_printf("rra\n");
	reverse_rotate(lst_a);
}

void    rrb(t_list **lst_b)
{
	ft_printf("rrb\n");
	reverse_rotate(lst_b);
}

