/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:57:26 by abolea            #+#    #+#             */
/*   Updated: 2024/02/02 13:45:16 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*ft_lstnew_p(int content)
{
	t_swap	*lst;

	lst = malloc(sizeof(t_swap));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

t_swap	*ft_lstlast_p(t_swap *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
		}
	}
	return (lst);
}

void	ft_lstadd_back_p(t_swap **lst, t_swap *new)
{
	t_swap	*lastadd;

	lastadd = ft_lstlast_p(*lst);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lastadd->next = new;
	new->prev = lastadd;
}

int	ft_lstsize_p(t_swap *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
