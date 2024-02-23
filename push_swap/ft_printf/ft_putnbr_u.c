/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famillebolea <famillebolea@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:59:01 by abolea            #+#    #+#             */
/*   Updated: 2024/02/23 11:53:43 by famillebole      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n, int fd, int *i)
{
	if (n <= 0)
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
