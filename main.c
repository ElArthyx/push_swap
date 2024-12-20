/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:43:12 by abosc             #+#    #+#             */
/*   Updated: 2024/12/02 17:16:41 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *error_message;

int	is_error_one_args(int argc, char **argv)
{
	int		i;
	char	**numbers;
 
	i = 0;
	numbers = ft_split(argv[1], ' ');
	if(!check_doublons(numbers))
	{
		ft_printf("Erreur\n");
		return (0);
	}
	while (numbers[i])
	{
		if (!ft_isdigit(*numbers[i]) || !check_in_int(numbers[i]))
		{
			ft_printf("Erreur\n");
			return (0);
		}
		i++;
	}
}
int	is_error_few_args(int argc, char **argv)
{
	int		i;
	char	**numbers;
 
	i = 0;
	if(!check_doublons(argv))
	{
		ft_printf("Erreur\n");
		return (0);
	}
	while (argv[i + 1])
	{
		if (!ft_isdigit(argv[i + 1]) || !check_in_int(argv[i + 1]))
		{
			ft_printf("Erreur\n");
			return (0);
		}
		i++;
	}
	return (0);
}

// TODO: fonction temp
void	ft_lstprint(t_list *liste)
{
	t_list	*tmp;
	int		s;

	tmp = liste;
	while (tmp != NULL)
	{
		s = tmp->content;
		ft_printf("%d", s);
		if (tmp->content)
			ft_printf( "-> ");
		tmp = tmp->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	 	return (0);
	if (argc == 2)
	 	if (!is_error_one_args(argc, argv))
	 		return (0);
	else
		if (!is_error_few_args(argc, argv))
	 		return (0);

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
	ft_lstprint(lst_b);
	ft_lstprint(lst_a);
	//ft_lstprint(lst_b);	
	//small_stack(&lst_a, &lst_b);
	indexage(&lst_a);
	ft_printf("\ntest finale :  ");
	ft_lstprint(lst_a);
	//ft_lstprint(lst_b);
	return (0);
}
