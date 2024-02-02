/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:05 by abolea            #+#    #+#             */
/*   Updated: 2024/01/30 17:38:26 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_swap *stack)
{
	swap_a(stack);
	swap_a(stack);
}

void	rotate_ab(t_swap *stack)
{
	rotate_a(stack);
	rotate_b(stack);
}

void	reverse_rotate_ab(t_swap *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
}
