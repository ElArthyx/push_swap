/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:31:58 by abosc             #+#    #+#             */
/*   Updated: 2024/11/19 23:54:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_in_int(char *char_num)
{
	int	len;

	len = ft_strlen(char_num);
	if (len == 10 && ft_strncmp(char_num, "2147483647", 11) > 0)
	{
		ft_printf("Erreur\n");
		return (0);
	}
	if (ft_strncmp(char_num, "-2147483647", 11) < 0)
	{
		ft_printf("Erreur\n");
		return (0);
	}
}

int	check_doublons(char	**args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (args[i])
	{
		while (args[i + j])
		{
			if (ft_strncmp(args[i], args[j], 11) == 0)
			{
				ft_printf("Erreur\n");
				return (0);
			}
		}
	}
}
