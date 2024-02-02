# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abolea <abolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 11:32:23 by abolea            #+#    #+#              #
#    Updated: 2024/02/02 13:50:46 by abolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Werror -Wextra -g3

NAME = push_swap

PRINTF_FILE	=	ft_printf/libftprintf.a

LIBFT_FILE	=	libft/libft.a

SRC = main.c fill_stack.c list.c check_error.c a_function.c little_list.c
#  b_function.c a_b_functions.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) push_swap.h
		make -sC ft_printf
		make -sC libft
		$(CC) $(FLAGS) $(OBJ) -L ft_printf -l ftprintf -L libft -l ft -o $(NAME)

clean :
		rm -f $(OBJ)
		make -sC ft_printf clean
		make -sC libft clean

fclean : clean
		rm -f $(NAME)
		rm -f $(PRINTF_FILE)
		rm -f $(LIBFT_FILE)
		

re : fclean all

.PHONY: all clean fclean re
