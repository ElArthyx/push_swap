/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotateFunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:41 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 03:42:45 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **lst, char x)
{
	t_list	*new;
	
	if (x == 'a')
		ft_printf("rra\n");
	else if (x == 'b')
		ft_printf("rrb\n");
	if (ft_lstsize(*lst) <= 1)
		return ;
	new = ft_lstnew((*lst)->content);
	ft_lstadd_front(lst, new);
	free(ft_lstlast(*lst));
}

void	double_rr(t_list **lst_a, t_list **lst_b)
{
	ft_printf("rrr\n");
	reverse_rotate(lst_a, 'x');
	reverse_rotate(lst_b, 'x');
}
