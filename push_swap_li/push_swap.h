/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:21:07 by abolea            #+#    #+#             */
/*   Updated: 2024/02/02 15:26:59 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_swap
{
	int				content;
	unsigned int	rank;
	struct s_swap	*next;
	struct s_swap	*prev;
}	t_swap;

int		ft_atoi_swap(char *nptr);
void	ft_exit();
int		check_letter(int i, char **argv);
void	fill_lst(t_swap **lst, char **argv, int argc);
int		return_error(int argc, char **argv);
int		check_duplicate(t_swap *lst);
int		is_sort(t_swap *lst);
void	malloc_stack(t_swap *stack);
void	swap_a(t_swap **lst);
void	push_a(t_swap **lst, t_swap **lstb);
void	rotate_a(t_swap	**lst);
void	reverse_rotate_a(t_swap	**lst);
void	little_nb(t_swap *lst);
void	two_nb(t_swap *lst);
void	three_nb(t_swap	*lst);




t_swap	*ft_lstlast_p(t_swap *lst);
void	ft_lstadd_back_p(t_swap **lst, t_swap *new);
int		ft_lstsize_p(t_swap *lst);
int		lst_content(t_swap *lst, int i);
t_swap	*ft_lstnew_p(int content);

void	print_lst(t_swap *lst, t_swap *lstb);

#endif