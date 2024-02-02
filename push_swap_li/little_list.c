/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:20:50 by abolea            #+#    #+#             */
/*   Updated: 2024/02/02 15:20:07 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_nb(t_swap *lst)
{
	if (lst_content(lst, 0) > lst_content(lst, 1))
		swap_a(&lst);
	else
		return;
}

void	three_nb(t_swap	*lst)
{
	if (lst_content(lst, 0) > lst_content(lst, 2) && lst_content(lst, 2) > lst_content(lst, 1))
		rotate_a(&lst);
	else if (lst_content(lst, 0) < lst_content(lst, 2) && lst_content(lst, 1) > lst_content(lst, 2))
	{
		reverse_rotate_a(&lst);
		swap_a(&lst);
	}
	else if (lst_content(lst, 0) < lst_content(lst, 2) && lst_content(lst, 0) > lst_content(lst, 1))
		swap_a(&lst);
	else if (lst_content(lst, 0) > lst_content(lst, 1) && lst_content(lst, 1) > lst_content(lst, 2))
	{
		rotate_a(&lst);
		swap_a(&lst);
	}
	else if (lst_content(lst, 0) < lst_content(lst, 1) && lst_content(lst, 0) > lst_content(lst, 2))
		reverse_rotate_a(&lst);
	else
		return;
}

// void	four_five_nb(t_swap	*(*lst))
// {
// 	while ((*lst)->len_a == 0)
// 	{
// 		if ((*lst)->(*lst)_a[0] < lst_content(lst, 1))
// 			push_b((*lst));
// 		else
// 		{
// 			swap_a((*lst));
// 			push_b((*lst));
// 		}
// 		(*lst)->len_a--;
// 		(*lst)->len_b++;
// 	}
	
// }

void	little_nb(t_swap *lst)
{
	if (ft_lstsize_p(lst) == 2)
		two_nb(lst);
	// else if (ft_lstsize_p(lst) == 2)
	// 	three_nb(lst);
}

int lst_content(t_swap *lst, int i)
{
	while (lst && i > 0)
	{
		lst = lst->next;
		i--;
	}
	
	return (lst->content);
}
