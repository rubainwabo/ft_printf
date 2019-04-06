# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 02:03:49 by rkamegne          #+#    #+#              #
#    Updated: 2019/04/06 02:40:08 by rkamegne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf
SRC = ft_parse.c ft_printf.c ft_getFlags.c main.c
OBJ = $(SRC:.c=.o)
.PHONY : all clean fclean re

all: $(OBJ)
	@make -C libft/
	@gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re:
	fclean all
