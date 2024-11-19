/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotateFunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:41 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 23:40:05 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*second_to_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}

void	reverse_rotate(t_list **lst)
{
	t_list	*temp;
	
	if (ft_lstsize(*lst) <= 1)
		return ;
	temp = second_to_last(*lst);
	temp->next->next = *lst;
	*lst = temp->next ;
	temp->next = NULL ;
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
