/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:20:50 by abolea            #+#    #+#             */
/*   Updated: 2024/02/15 17:42:33 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_nb(t_swap **lst)
{
	if (lst_content(*lst, 0) > lst_content(*lst, 1))
		swap_a(lst);
	else
		return ;
}

void	three_nb(t_swap	**lst)
{
	if (lst_content(*lst, 0) > lst_content(*lst, 2) \
	&& lst_content(*lst, 2) > lst_content(*lst, 1))
		rotate_a(lst);
	else if (lst_content(*lst, 0) < lst_content(*lst, 2) && \
	lst_content(*lst, 1) > lst_content(*lst, 2))
	{
		reverse_rotate_a(lst);
		swap_a(lst);
	}
	else if (lst_content(*lst, 0) < lst_content(*lst, 2) && \
	lst_content(*lst, 0) > lst_content(*lst, 1))
		swap_a(lst);
	else if (lst_content(*lst, 0) > lst_content(*lst, 1) && \
	lst_content(*lst, 1) > lst_content(*lst, 2))
	{
		rotate_a(lst);
		swap_a(lst);
	}
	else if (lst_content(*lst, 0) < lst_content(*lst, 1) && \
	lst_content(*lst, 0) > lst_content(*lst, 2))
		reverse_rotate_a(lst);
	else
		return ;
}

void	four_nb(t_swap	**lst, t_swap **lstb)
{
	if (is_sort(*lst, *lstb) == 1)
		return ;
	r_or_rr4(lst);
	push_b(lst, lstb);
	three_nb(lst);
	push_a(lst, lstb);
}

void	five_nb(t_swap	**lst, t_swap **lstb)
{
	if (is_sort(*lst, *lstb) == 1)
		return ;
	r_or_rr5(lst);
	push_b(lst, lstb);
	r_or_rr4(lst);
	push_b(lst, lstb);
	three_nb(lst);
	if ((*lstb)->content < (*lstb)->next->content)
		swap_b(lstb);
	push_a(lst, lstb);
	push_a(lst, lstb);
}

void	little_nb(t_swap **lst, t_swap **lstb)
{
	if (ft_lstsize_p(*lst) == 2)
		two_nb(lst);
	else if (ft_lstsize_p(*lst) == 3)
		three_nb(lst);
	else if (ft_lstsize_p(*lst) == 4)
		four_nb(lst, lstb);
	else if (ft_lstsize_p(*lst) == 5)
		five_nb(lst, lstb);
}
