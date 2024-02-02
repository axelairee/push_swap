/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_function.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:23 by abolea            #+#    #+#             */
/*   Updated: 2024/01/31 10:57:03 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_swap *stack)
{
	int	tmp;
	
	if (stack->len_b >= 2)
	{
		tmp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = tmp;
	}
}

void	push_b(t_swap *stack)
{
	int	len1;
	int len2;

	len1 = 0;
	len2 = stack->len_b;
	if (stack->len_a > 0)
	{
		while (len2 >= 0)
		{
			stack->stack_b[len2 + 1] = stack->stack_b[len2];
			len2--;
		}
		stack->stack_b[0] = stack->stack_a[0];
		stack->len_a--;
		stack->len_b++;
		while (len1 < stack->len_a + 1)
		{
			stack->stack_a[len1] = stack->stack_a[len1 + 1];
			len1++;
		}
	}
}

void	rotate_b(t_swap	*stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->stack_b[0];
	if (stack->len_b <= 1)
		return;
	while (i < stack->len_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->len_b - 1] = tmp;
}

void	reverse_rotate_b(t_swap	*stack)
{
	int	tmp;
	int	i;

	i = stack->len_b - 1;
	tmp = stack->stack_b[stack->len_b - 1];
	if (stack->len_b <= 1)
		return;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
}
