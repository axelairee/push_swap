/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:17:56 by abolea            #+#    #+#             */
/*   Updated: 2024/02/01 13:24:03 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_lst(t_swap **lst, char **argv, int argc)
{
	int		j;
	int		i;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		j = 0;
		while (arg[j])
		{
			if (arg[j] != ' ')
			{
				ft_lstadd_back_p(lst, ft_lstnew_p(ft_atoi_swap(&arg[j])));
				if (ft_atoi_swap(&arg[j]) == LONG_MAX || ft_lstnew_p(ft_atoi_swap(&arg[j])) == NULL) 
					return (-1);
				while (arg[j] && arg[j] != ' ')
					j++;
			}
			else
				j++;
		}
		i++;
	}
	return (1);
}

long	ft_atoi_swap(char *nptr)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == 45 || *nptr == 43)
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if ((sign == 1 && result > (INT_MAX - (*nptr - '0')) / 10) || \
			(-result < (-2147483648 + (*nptr - '0')) / 10))
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MAX);
		}
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

int	is_sort(t_swap *lst, t_swap *lstb)
{
	if (lst && !lstb)
	{
		while (lst->next)
		{
			if (lst->content > lst->next->content)
				return (0);
			lst = lst->next;
		}
		return (1);
	}
	else
		return (0);
}
