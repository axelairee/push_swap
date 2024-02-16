/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:42 by abolea            #+#    #+#             */
/*   Updated: 2024/02/16 13:13:02 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_lst(t_swap *lst, t_swap *lstb)
{
    t_swap *tmp;
    t_swap *tmp2;
    int i;

    i = 0;
    tmp = lst;
    tmp2 = lstb;

    while (tmp || tmp2)
    {
        if (tmp)
        {
            ft_printf("%d : |%d|", i, tmp->content);
            tmp = tmp->next;
        }
        else
        {
            ft_printf("        ");
        }

        if (tmp2)
        {
            ft_printf("        %d : |%d|\n", i, tmp2->content);
            tmp2 = tmp2->next;
        }
        else
        {
            ft_printf(" \n");
        }
        i++;
    }
    ft_printf("\nstack a         stack b\n");
}


int	main(int argc, char **argv)
{
	t_swap	*lst;
	t_swap	*lstb;
	t_val	val;

	lst = NULL;
	lstb = NULL;
	if (argc <= 1)
		return (ft_printf("ERROR"));
	if (return_error(argc, argv) == 0)
		return (ft_printf("ERROR"));
	fill_lst(&lst, argv, argc);
	fill_index(lst);
	if (check_duplicate(lst) == 0)
	{
		free_list(lst);
		return (ft_printf("ERROR\ndoublon"));
	}
	if (is_sort(lst, lstb) == 1)
		return (free_list(lst), 0);
	if (ft_lstsize_p(lst) <= 5)
		little_nb(&lst, &lstb);
	else
		sort_nb(&lst, &lstb, &val);
    print_lst(lst, lstb);
	free_list(lst);
	return (0);
}
