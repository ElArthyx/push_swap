/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:43:12 by abosc             #+#    #+#             */
/*   Updated: 2024/11/19 04:09:06 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
int	is_error_one_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	return (0);
}
int	is_error_few_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	return (0);
}
*/

void	ft_lstprint(t_list *liste)
{
	t_list	*tmp;
	int		s;

	tmp = liste;
	while (tmp != NULL)
	{
		s = tmp->content;
		printf("%d -> ", s);
		tmp = tmp->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	// if (argc == 2)
	// 	if (is_error_one_args(argc, argv))
	// 		return (0);
	// else
	// 	if (is_error_few_args(argc, argv))
	// 		return (0);
	t_list	*lst_a;
	t_list	*lst_b;
	int 	value;
	int i;
	i = 1;
	lst_a = ft_lstnew(ft_atoi(argv[i]));
	i++;
	lst_b = NULL;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		ft_lstadd_back(&lst_a, ft_lstnew(value));
		i++;
	}
	ft_lstprint(lst_a);
	ft_lstprint(lst_b);	
	algo(&lst_a, &lst_b);
	ft_printf("\ntest finale :  ");
	ft_lstprint(lst_a);
	ft_lstprint(lst_b);
	return (0);
}
