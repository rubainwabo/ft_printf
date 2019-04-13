# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/18 18:23:24 by rkamegne          #+#    #+#              #
#    Updated: 2019/04/10 05:32:37 by rkamegne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(OBJ)
	@$(CC) $(CFLAGS) -c $(SRC) 

clean:
	@/bin/rm -f $(OBJ)

fclean: clean

re: fclean all

.PHONY : fclean clean all re
