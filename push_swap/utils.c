/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:11:19 by abolea            #+#    #+#             */
/*   Updated: 2024/02/16 10:38:28 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_swap *lst)
{
	t_swap	*next;

	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
}

int	pos_min(t_swap	*lst)
{
	int	i;

	i = 0;
	while (lst->content != find_min(lst))
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	find_min(t_swap *lst)
{
	t_swap	*tmp;
	t_swap	*min;

	tmp = lst->next;
	min = lst;
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min->content);
}

int	pos_max(t_swap	*lst)
{
	int	i;

	i = 0;
	while (lst->content != find_max(lst))
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	find_max(t_swap *lst)
{
	t_swap	*tmp;
	t_swap	*min;

	tmp = lst->next;
	min = lst;
	while (tmp)
	{
		if (tmp->content > min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min->content);
}
