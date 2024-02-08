/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:05 by abolea            #+#    #+#             */
/*   Updated: 2024/02/06 14:17:38 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_swap *lst)
{
	swap_a(&lst);
	swap_b(&lst);
}

void	rotate_ab(t_swap *lst)
{
	rotate_a(&lst);
	rotate_b(&lst);
}

void	reverse_rotate_ab(t_swap *lst)
{
	reverse_rotate_a(&lst);
	reverse_rotate_b(&lst);
}
