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
	int		i;
	int		j;
	t_swap	*new_l;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				new_l = ft_lstnew_p(ft_atoi_swap(&argv[i][j]));
				ft_lstadd_back_p(lst, new_l);
			}
			while (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			if (argv[i][j])
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
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	if (nb > INT_MAX || nb < INT_MIN)
			ft_exit();
	return ((int)(nb * sign));
}

int	is_sort(t_swap *lst)
{
	while (lst->next)
	{
		if (lst->content > lst->next->content)
			return (ft_printf("\nlist is not sort\n"));
		lst = lst->next;
	}
	return (ft_printf("\nlist is sort\n"));
}
