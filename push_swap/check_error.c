/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:46:40 by abolea            #+#    #+#             */
/*   Updated: 2024/02/19 11:16:29 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_letter(int i, char **argv)
{
	int	j;

	j = 0;
	while (argv[i][j])
	{
		if ((!(argv[i][j] >= '0' && argv[i][j] <= '9')) && \
		argv[i][j] != '-' && argv[i][j] != '+' && argv[i][j] != ' ' )
			return (0);
		if (argv[i][j] == '+' || argv[i][j] == '-')
			if (!(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9'))
				return (0);
		if (argv[i][j] >= '0' && argv[i][j] <= '9')
			if (!(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9') && \
			argv[i][j + 1] != ' ' && argv[i][j + 1] != 0)
				return (0);
		j++;
	}
	return (1);
}

int	return_error(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_letter(i, argv) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicate(t_swap *lst)
{
	t_swap	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		while (tmp != NULL)
		{
			if (lst->content == tmp->content)
				return (0);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (1);
}
