/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:42 by abolea            #+#    #+#             */
/*   Updated: 2024/02/19 15:27:40 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_swap	*lst;
	t_swap	*lstb;
	t_val	val;

	lst = NULL;
	lstb = NULL;
	if (argc <= 1)
		return (0);
	if (return_error(argc, argv) == 0)
		return (write(2, "Error\n", 7));
	if (fill_lst(&lst, argv, argc) == -1)
		return (free_list(lst), write(2, "Error\n", 7));
	fill_index(lst);
	if (check_duplicate(lst) == 0)
		return (free_list(lst), write(2, "Error\n", 7));
	if (is_sort(lst, lstb) == 1)
		return (free_list(lst), 0);
	if (ft_lstsize_p(lst) <= 5)
		little_nb(&lst, &lstb);
	else
		sort_nb(&lst, &lstb, &val);
	free_list(lst);
	return (0);
}
