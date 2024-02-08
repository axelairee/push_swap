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

void	ft_exit()
{
	exit(ft_printf("ERROR"));
}

void	fill_lst(t_swap **lst, char **argv, int argc)
{
	int i, j;
	char *arg;

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
				while (arg[j] && arg[j] != ' ')
					j++;
			}
			else
				j++;
		}
		i++;
	}
}

int	ft_atoi_swap(char *nptr)
{
	int		sign;
	long	nb;

	sign = 1;
	nb = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	if (nb > INT_MAX || nb < INT_MIN)
			ft_exit();
	return ((int)(nb * sign));
}

int	is_sort(t_swap *lst, t_swap *lstb)
{
	if (lst && !lstb)
	{
		while (lst->next)
		{
			if (lst->content > lst->next->content)
				return (ft_printf("\nlist is not sort\n"), 0);
			lst = lst->next;
		}
		return (ft_printf("\nlist is sort\n"), 1);
	}
	else
		return (ft_printf("\nlist is not sort\n"), 0);
}
