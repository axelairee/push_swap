/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:05 by abolea            #+#    #+#             */
/*   Updated: 2024/02/15 13:05:35 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_swap **lst, t_swap **lstb)
{
	swap_a(lst);
	swap_b(lstb);
}

void	rotate_ab(t_swap **lst, t_swap **lstb)
{
	rotate_a(lst);
	rotate_b(lstb);
	ft_printf("rr\n");
}

void	reverse_rotate_ab(t_swap **lst, t_swap **lstb)
{
	reverse_rotate_a(lst);
	reverse_rotate_b(lstb);
	ft_printf("rrr\n");
}
