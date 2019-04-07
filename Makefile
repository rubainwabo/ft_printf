# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 02:03:49 by rkamegne          #+#    #+#              #
#    Updated: 2019/04/06 18:00:38 by rkamegne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf
SRC = ft_parse.c ft_printf.c main.c
OBJ = $(SRC:.c=.o)
LIB = libftprintf.a
.PHONY : all clean fclean re

all: $(LIB)

$(LIB): $(OBJ)
	@make -C libft/
	@cp libft/libft.a ./libftprintf.a
	@gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) -L . -lftprintf

clean:
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(LIB)
	@/bin/rm -f $(NAME)

re: fclean all
