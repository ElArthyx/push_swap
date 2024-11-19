/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:16:05 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 22:47:07 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
	int	mid;
	int	n;
	int	offset;
	int	start;
	int	end;

	n = nvalue(ft_lstsize(*a));
	mid = ft_lstsize(*a) / 2;
	offset = ft_lstsize(*a) / n;
	start = mid - offset;
	end = mid + offset;
	while (ft_lstsize(*a) > 1)
	{
		if (fst_sup_sec(*a) == 1)
			swap(a, 'a');
		push(a, b, 'b');
		if (fst_sup_sec(*b) == 0)
			swap(b, 'b');
	}
	while (ft_lstsize(*b) > 1)
	{
		if (fst_sup_sec(*b) == 0)
			swap(b, 'b');
		push(b, a, 'a');
		if (fst_sup_sec(*a) == 1)
			swap(a, 'a');
	}
}

int	nvalue(int lst_size)
{
	if (lst_size <= 10)
		return (10);
	else if (lst_size <= 150)
		return (8);
	else
		return (18);

