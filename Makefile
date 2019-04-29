# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 02:03:49 by rkamegne          #+#    #+#              #
#    Updated: 2019/04/29 21:38:16 by rkamegne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_conver_csp.c ft_printf.c ft_parse.c ft_utils.c ft_conver_numbers.c \
	ft_unsigned_numbers.c ft_unsigned_numbers2.c ft_float_numbers.c
MAIN = main.c
OBJ = $(SRC:.c=.o) 
SRC_LFT = $(wildcard libft/*.c)
OBJ_LFT = $(SRC_LFT:.c=.o)
INC = libftprintf.h
INC_LFT = $(wildcard libft/*.h)
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJ) $(INC) $(OBJ_LFT) $(INC_LFT)
	@make -C libft/ 
	@ar -rcs $(NAME) $(OBJ) $(OBJ_LFT)
	@ranlib $(NAME)

clean:
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
