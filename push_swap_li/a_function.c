/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_function.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:17:48 by abolea            #+#    #+#             */
/*   Updated: 2024/02/02 15:40:08 by abolea           ###   ########.fr       */
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
		print_lst(*lst);
    }
}

// void	push_a(t_swap **lst, t_swap **lstb)
// {
// 	if (*lst)
// 	{
// 		*lst = (*lst)->next;
// 		if ((*lstb))
// 		{
// 			(*lstb)->prev = NULL;
// 			*lstb = (*lstb)->next;
// 			(*lstb)->next->prev = *lst;
// 		}
// 		else
// 		{
// 			(*lstb)->prev = NULL;
// 			(*lstb)->next = *lst;
// 			(*lstb)->next->prev = NULL;
// 		}
// 		*lstb = (*lstb)->prev;
// 	}
// }


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
		print_lst(*lst);
	}
	
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
		print_lst(*lst);
	}
}
