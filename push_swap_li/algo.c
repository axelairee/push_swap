/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:28:21 by abolea            #+#    #+#             */
/*   Updated: 2024/02/16 13:20:25 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_nb(t_swap **lst, t_swap **lstb, t_val *val)
{
	push_b(lst, lstb);
	push_b(lst, lstb);
	fill_index(*lst);
	fill_index(*lstb);
	while ((*lst))
	{
		r_or_rr(lst, lstb, val);
		push_b(lst, lstb);
		fill_index(*lst);
		fill_index(*lstb);
	}
	if (pos_max(*lstb) > ft_lstsize_p(*lstb) / 2 + 1)
	{
		while (pos_max(*lstb) != 0)
			reverse_rotate_b(lstb);
	}
	else
	{
		while (pos_max(*lstb) != 0)
			rotate_b(lstb);
	}
	while (*lstb)
		push_a(lst, lstb);
}

void	r_or_rr(t_swap **lst, t_swap **lstb, t_val *val)
{
	int	top_rb;

	top_rb = top_cost(*lst, *lstb, val);
	while (val->nb_rotate_a > 0)
	{
		if (val->ra == 1)
			rotate_a(lst);
		else
			reverse_rotate_a(lst);
		val->nb_rotate_a--;
	}
	while (val->nb_rotate_b > 0)
	{
		if (top_rb == 1)
			rotate_b(lstb);
		else
			reverse_rotate_b(lstb);
		val->nb_rotate_b--;
	}
}


int	cost_min_b(t_swap *lstb, t_swap *lst, t_val *val)
{
	int		i_max_b;
	int		i_min_b;
	t_swap	*last_b;

	last_b = ft_lstlast_p(lstb);
	i_max_b = pos_max(lstb);
	i_min_b = pos_min(lstb);
	while (find_min(lstb) != lstb->content)
		lstb = lstb->next;
	if (lst->content < lstb->content)
	{
		if (i_min_b < (last_b->i / 2 + 1))
		{
			val->rb = 1;
			return (i_max_b);
		}
		else
		{
			val->rb = 0;
			return (last_b->i - i_max_b + 1);
		}
	}
	return (-1);
}

int	cost_max_b(t_swap *lstb, t_swap *lst, t_val *val)
{
	int		i_max_b;
	t_swap	*last_b;

	last_b = ft_lstlast_p(lstb);
	i_max_b = pos_max(lstb);
	while (find_max(lstb) != lstb->content)
		lstb = lstb->next;
	if (lst->content > lstb->content)
	{
		if (i_max_b < last_b->i / 2 + 1)
		{
			val->rb = 1;
			return (i_max_b);
		}
		else
		{
			val->rb = 0;
			return (last_b->i - i_max_b + 1);
		}
	}
	return (-1);
}
