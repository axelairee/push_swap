/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_function.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:17:48 by abolea            #+#    #+#             */
/*   Updated: 2024/02/08 14:22:19 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_swap **lst) 
{
	t_swap	*tmp;
	
    if ((*lst)->next)
	{
		tmp = (*lst)->next;
		
        (*lst)->next = tmp->next;
        if (tmp->next != NULL) 
            tmp->next->prev = *lst;
        tmp->prev = NULL;
        tmp->next = *lst;
        (*lst)->prev = tmp;
        *lst = tmp;
		ft_printf("sa\n");
    }
}

void	push_a(t_swap **lst, t_swap **lstb)
{
	t_swap	*first;
	t_swap	*second;

	if (*lstb)
	{
		first = *lstb;
		second = (*lstb)->next;
		if (*lst)
		{
			first->next = *lst;
			(*lst)->prev = first;
		}
		else
		{
			first->next = NULL;
		}
		if (second)
			second->prev = NULL;
		*lstb = second;
		*lst = first;
	}
	ft_printf("pa\n");
}


void	rotate_a(t_swap	**lst)
{
	t_swap	*last;
	t_swap	*first;

	if (*lst && (*lst)->next)
	{
		last = ft_lstlast_p(*lst);
		first = *lst;
		*lst = (*lst)->next;
		(*lst)->prev = NULL;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
	ft_printf("ra\n");
	
}

void	reverse_rotate_a(t_swap	**lst)
{
	t_swap	*last;
	t_swap	*first;

	if (*lst && (*lst)->next)
	{
		last = ft_lstlast_p(*lst);
		first = *lst;
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*lst = last;
		(*lst)->next = first;
	}
	ft_printf("rra\n");
}
