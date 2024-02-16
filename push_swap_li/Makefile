# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abolea <abolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 11:32:23 by abolea            #+#    #+#              #
#    Updated: 2024/02/15 17:42:58 by abolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Werror -Wextra -g3

NAME = push_swap

PRINTF_FILE	=	ft_printf/libftprintf.a

SRC = main.c fill_stack.c list.c check_error.c a_function.c \
little_list.c b_function.c utils.c algo.c a_b_functions.c \
utils2.c cost.c


OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) push_swap.h
		make -sC ft_printf
		$(CC) $(FLAGS) $(OBJ) -L ft_printf -l ftprintf -o $(NAME)

clean :
		rm -f $(OBJ)
		make -sC ft_printf clean

fclean : clean
		rm -f $(NAME)
		rm -f $(PRINTF_FILE)

re : fclean all

.PHONY: all clean fclean re
