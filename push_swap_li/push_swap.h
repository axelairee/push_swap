/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:21:07 by abolea            #+#    #+#             */
/*   Updated: 2024/02/16 13:56:04 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_swap
{
	int				content;
	int				i;

	struct s_swap	*next;
	struct s_swap	*prev;
}	t_swap;

typedef struct s_val
{
	int	rb;
	int	ra;
	int	i_top_a;
	int	nb_rotate_b;
	int	nb_rotate_a;
	int	mid_a;
}	t_val;

int		ft_atoi_swap(char *nptr);
int		check_letter(int i, char **argv);
void	fill_lst(t_swap **lst, char **argv, int argc);
int		return_error(int argc, char **argv);
int		check_duplicate(t_swap *lst);
int		is_sort(t_swap *lst, t_swap *lstb);
void	malloc_stack(t_swap *stack);
void	swap_a(t_swap **lst);
void	push_a(t_swap **lst, t_swap **lstb);
void	rotate_a(t_swap	**lst);
void	reverse_rotate_a(t_swap	**lst);
void	little_nb(t_swap **lst, t_swap **lstb);
void	rotate_ab(t_swap **lst, t_swap **lstb);
void	reverse_rotate_ab(t_swap **lst, t_swap **lstb);
void	two_nb(t_swap **lst);
void	three_nb(t_swap	**lst);
void	push_b(t_swap **lst, t_swap **lstb);
void	swap_b(t_swap **lstb);
void	reverse_rotate_b(t_swap	**lstb);
void	rotate_b(t_swap	**lstb);
int		find_min(t_swap *lst);
void	four_nb(t_swap	**lst, t_swap **lstb);
void	five_nb(t_swap	**lst, t_swap **lstb);
int		pos_min(t_swap	*lst);
void	r_or_rr5(t_swap **lst);
void	r_or_rr4(t_swap **lst);
void	free_list(t_swap *lst);
void	sort_nb(t_swap **lst, t_swap **lstb, t_val *val);
int		find_max(t_swap *lst);
int		pos_max(t_swap	*lst);
void	push_min(t_swap **lst, t_swap **lstb);
void	push_max(t_swap **lst, t_swap **lstb);
void	fill_index(t_swap *lst);
int		ft_cost_b(t_swap *lst, t_swap *lstb, t_val *val);
int		top_cost(t_swap	*lst, t_swap *lstb, t_val *val);
int		cost_min_b(t_swap *lstb, t_swap *lst, t_val *val);
int		cost_max_b(t_swap *lstb, t_swap *lst, t_val *val);
int		ft_cost_a(t_swap *lst);
int		cost_b_return(t_swap *lst, t_swap *lstb, t_val *val);
t_swap	*ft_lstlast_p(t_swap *lst);
void	ft_lstadd_back_p(t_swap **lst, t_swap *new);
int		ft_lstsize_p(t_swap *lst);
int		lst_content(t_swap *lst, int i);
t_swap	*ft_lstnew_p(int content);
void	a_rotate(t_swap *lst, t_val *val);
void	r_or_rr(t_swap **lst, t_swap **lstb, t_val *val);
int calculate_top_cost(t_swap *lst, t_swap *lstb, t_val *val);
void calculate_rotations(int top_cost, t_swap *lst, t_val *val);

void print_lst(t_swap *lst, t_swap *lstb);

#endif