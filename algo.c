/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:16:05 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/20 02:39:27 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
	while (a_is_sorted(*a) == 0)
	{
		while (ft_lstsize(*a) > 1)
		{
			if (fst_sup_sec(*a) == 1)
				sa(a);
			pb(a, b);
			if (fst_sup_sec(*b) == 0)
				sb(b);
			ft_lstprint(*a);
		}
		while (ft_lstsize(*b) > 0)
		{
			if (fst_sup_sec(*b) == 0)
				sb(b);
			pa(a, b);
			if (fst_sup_sec(*a) == 1)
				sa(a);
		}
	}
}

int	nvalue(int lst_size)
{
	if (lst_size <= 10)
		return (5);
	else if (lst_size <= 150)
		return (8);
	else
		return (18);
}
