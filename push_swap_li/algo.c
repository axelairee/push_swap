/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:28:21 by abolea            #+#    #+#             */
/*   Updated: 2024/02/08 15:49:54 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_nb(t_swap **lst, t_swap **lstb)
{
	while (*lst)
	{
		if (pos_min(*lst) >= ft_lstsize_p(*lst) / 2)
		{
			while ((*lst)->content != find_min(*lst))
			{
				rotate_a(lst);
			}
		}
		else
		{
			while ((*lst)->content != find_min(*lst))
			{
				reverse_rotate_a(lst);
			}
		}
		push_b(lst, lstb);
	}
	while (*lstb)
	{
		push_a(lst, lstb);
	}
}

