/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:41:28 by abolea            #+#    #+#             */
/*   Updated: 2024/02/15 17:42:38 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_index(t_swap *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->i = i;
		i++;
		lst = lst->next;
	}
}

void	r_or_rr4(t_swap **lst)
{
	if (pos_min(*lst) == 1)
		rotate_a(lst);
	else if (pos_min(*lst) == 2)
	{
		rotate_a(lst);
		rotate_a(lst);
	}
	else if (pos_min(*lst) == 3)
		reverse_rotate_a(lst);
}

void	r_or_rr5(t_swap **lst)
{
	if (pos_min(*lst) == 1)
		rotate_a(lst);
	else if (pos_min(*lst) == 2)
	{
		rotate_a(lst);
		rotate_a(lst);
	}
	else if (pos_min(*lst) == 3)
	{
		reverse_rotate_a(lst);
		reverse_rotate_a(lst);
	}
	else if (pos_min(*lst) == 4)
		reverse_rotate_a(lst);
}

int	lst_content(t_swap *lst, int i)
{
	while (lst && i > 0)
	{
		lst = lst->next;
		i--;
	}
	return (lst->content);
}
