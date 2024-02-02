/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:59:01 by abolea            #+#    #+#             */
/*   Updated: 2024/01/29 16:21:58 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n, int fd, int *i)
{
	int	temp;

	temp = 0;
	if (n < 0)
	{
		if (ft_putstr_fd_p("(nil)", 1) < 0)
			return (-1);
		return (5);
	}
	if (n >= 10)
		ft_putnbr_fd_p(n / 10, fd, i);
	if (ft_putchar_fd_p((n % 10) + '0', fd) < 0)
		return (-1);
	(*i)++;
	return (*i);
}
