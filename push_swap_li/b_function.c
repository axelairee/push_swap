/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_function.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:23 by abolea            #+#    #+#             */
/*   Updated: 2024/02/08 14:22:32 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_swap **lstb) 
{
	t_swap	*tmp;
	
    if ((*lstb)->next)
	{
		tmp = (*lstb)->next;
		
        (*lstb)->next = tmp->next;
        if (tmp->next != NULL) 
            tmp->next->prev = *lstb;
        tmp->prev = NULL;
        tmp->next = *lstb;
        (*lstb)->prev = tmp;
        *lstb = tmp;
    }
	ft_printf("sb\n");
}

void	push_b(t_swap **lst, t_swap **lstb)
{
	t_swap	*first;
	t_swap	*second;

	if (*lst)
	{
		first = *lst;
		second = (*lst)->next;
		if (*lstb)
		{
			first->next = *lstb;
			(*lstb)->prev = first;
		}
		else
		{
			first->next = NULL;
		}
		if (second)
			second->prev = NULL;
		*lst = second;
		*lstb = first;
	}
	ft_printf("pb\n");
}

void	rotate_b(t_swap	**lstb)
{
	t_swap	*last;
	t_swap	*first;

	if (*lstb && (*lstb)->next)
	{
		last = ft_lstlast_p(*lstb);
		first = *lstb;
		*lstb = (*lstb)->next;
		(*lstb)->prev = NULL;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
	ft_printf("rb\n");
}

void	reverse_rotate_b(t_swap	**lstb)
{
	t_swap	*last;
	t_swap	*first;

	if (*lstb && (*lstb)->next)
	{
		last = ft_lstlast_p(*lstb);
		first = *lstb;
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*lstb = last;
		(*lstb)->next = first;
	}
	ft_printf("rrb\n");
}
