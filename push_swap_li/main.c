/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:42 by abolea            #+#    #+#             */
/*   Updated: 2024/02/02 15:40:24 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_swap *lst;
	// t_swap *lstb;

	lst = NULL;
	// lstb = NULL;
	if (argc <= 1)
		return (ft_printf("ERROR"));
	if (return_error(argc, argv) == 0)
		return (ft_printf("ERROR"));
	fill_lst(&lst, argv, argc);
	if (check_duplicate(lst) == 0)
		return (ft_printf("ERROR\ndoublon"));
	t_swap *lst_ptr = lst;
	while (lst_ptr)
    {
        ft_printf("%d, |%p|  |%p|  |%p|\n", lst_ptr->content, lst_ptr->prev, lst_ptr, lst_ptr->next);
        lst_ptr = lst_ptr->next;
    }
	print_lst(lst);
	little_nb(lst);
	lst_content(lst, 0);
	is_sort(lst);
	return (0);
}

void	print_lst(t_swap *lst)
{
	t_swap *tmp;
	// t_swap *tmp2;
	int	i;

	i = 0;
	tmp = lst;
	// tmp2 = lstb;
	// if (tmp2)
	// {
	// 	while (tmp)
	// 	{
	// 		ft_printf("%d : |%d|        %d : |%d|\n", i, tmp->content, i, tmp2->content);
	// 		i++;
	// 		tmp = tmp->next;
	// 	}
	// ft_printf("\nstack a        stack b\n");
	// }
	// else
	// {
		while (tmp)
		{
			ft_printf("%d : |%d|\n", i, tmp->content);
			i++;
			tmp = tmp->next;
		}
	ft_printf("\nstack a        stack b\n");
	// }
}
