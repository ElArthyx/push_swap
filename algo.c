/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:16:05 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/20 00:05:56 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
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
