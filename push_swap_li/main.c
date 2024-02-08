/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:42 by abolea            #+#    #+#             */
/*   Updated: 2024/02/08 15:37:46 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_swap *lst;
	t_swap *lstb;

	lst = NULL;
	lstb = NULL;
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
	if (ft_lstsize_p(lst) <= 5)
		little_nb(&lst, &lstb);
	else
		sort_nb(&lst, &lstb);
	print_lst(lst, lstb);
	t_swap *lst_ptr2 = lst;
	while (lst_ptr2)
    {
        ft_printf("%d, |%p|  |%p|  |%p|\n", lst_ptr2->content, lst_ptr2->prev, lst_ptr2, lst_ptr2->next);
        lst_ptr2 = lst_ptr2->next;
    }
	is_sort(lst, lstb);
	free_list(lst);
	return (0);
}

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
