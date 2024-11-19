/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:37:36 by abosc             #+#    #+#             */
/*   Updated: 2024/11/19 21:18:04 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	algo(t_list **a, t_list **b);
int		fst_sup_sec(t_list *lst);
int		sec_sup_thd(t_list *lst);
void	push(t_list **first, t_list **second);
void	reverse_rotate(t_list **lst);
void	double_rr(t_list **lst_a, t_list **lst_b);
void	rotate(t_list **lst);
void	rr(t_list **first, t_list **second);
void	swap(t_list **lst);
void	double_swap(t_list **lst_a, t_list **lst_b);
t_list  *ft_lstnew_int(int content);
void    ft_lstprint(t_list *liste);
void    pb(t_list **a, t_list **b);
void    pa(t_list **a, t_list **b);
void    rra(t_list **lst_a);
void    rrb(t_list **lst_b);
void    ra(t_list **lst_a);
void    rb(t_list **lst_b);

#endif
