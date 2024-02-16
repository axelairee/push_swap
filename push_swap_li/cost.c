/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:39:40 by abolea            #+#    #+#             */
/*   Updated: 2024/02/16 13:59:23 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	top_cost(t_swap	*lst, t_swap *lstb, t_val *val)
{
	int		top_cost;
	int		cost_a;
	int		cost_b;
	int		top_rb;
	t_swap	*last_a;	

	top_cost = INT_MAX;
	last_a = ft_lstlast_p(lst);
	while (lst)
	{
		cost_a = ft_cost_a(lst);
		cost_b = ft_cost_b(lst, lstb, val);
		if (top_cost > cost_a + cost_b)
		{
			top_cost = cost_a + cost_b;
			val->i_top_a = lst->i;
			val->nb_rotate_b = cost_b;
			top_rb = val->rb;
		}
		lst = lst->next;
	}
	val->mid_a = last_a->i / 2 + 1;
	if (val->i_top_a < val->mid_a)
	{
		val->ra = 1;
		val->nb_rotate_a = val->i_top_a;
	}
	else
	{
		val->ra = 0;
		val->nb_rotate_a = last_a->i - val->i_top_a + 1;
	}
	return (top_rb);
}

int	ft_cost_a(t_swap *lst)
{
	t_swap	*last_a;	

	last_a = ft_lstlast_p(lst);
	if (lst->i < (last_a->i / 2 + 1))
		return (lst->i + 1);
	else
		return (last_a->i - lst->i + 2);
}

int	ft_cost_b(t_swap *lst, t_swap *lstb, t_val *val)
{
	if (lst->content > lstb->content && \
	lst->content < ft_lstlast_p(lstb)->content)
		return (0);
	if (cost_b_return(lst, lstb, val) != -1)
		return (cost_b_return(lst, lstb, val));
	while (lstb->prev)
		lstb = lstb->prev;
	if (cost_min_b(lstb, lst, val) != -1)
		return (cost_min_b(lstb, lst, val));
	return (cost_max_b(lstb, lst, val));
}

int	cost_b_return(t_swap *lst, t_swap *lstb, t_val *val)
{
	t_swap	*last_b;

	last_b = ft_lstlast_p(lstb);
	while (lstb->next)
	{
		if (lst->content < lstb->content && lst->content > lstb->next->content)
		{
			if (lstb->i < ft_lstlast_p(lstb)->i / 2 + 1)
			{
				val->rb = 1;
				return (lstb->next->i);
			}
			else
			{
				val->rb = 0;
				return (last_b->i - lstb->next->i + 1);
			}
		}
		lstb = lstb->next;
	}
	return (-1);
}
