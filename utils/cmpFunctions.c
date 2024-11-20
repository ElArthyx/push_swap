/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:21:56 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/20 01:31:20 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	fst_sup_sec(t_list *lst)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(lst) == 0)
		return (-1);
	if (ft_lstsize(lst) == 1)
		return (-2);
	first = ft_lstnew(lst->content);
	second = ft_lstnew(lst->next->content);
	if (first->content > second->content)
		return (1);
	return (0);
}

int	sec_sup_thd(t_list *lst)
{
	t_list	*second;
	t_list	*third;

	if (ft_lstsize(lst) == 0)
		return (-1);
	if (ft_lstsize(lst) == 1)
		return (-2);
	second = ft_lstnew(lst->next->content);
	third = ft_lstnew(lst->next->next->content);
	if (second->content > third->content)
		return (1);
	return (0);
}

int	a_is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}
