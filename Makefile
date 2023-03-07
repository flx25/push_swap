# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 09:42:12 by fvon-nag          #+#    #+#              #
#    Updated: 2023/03/07 08:41:03 by fvon-nag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c \
		operations.c\
		operations2.c\
		operations3.c\
		sortsmall.c\
		utils.c\




OBJECTS = $(SOURCES:.c=.o)

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS) libft
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	+make -C libft

clean:
	rm -f $(OBJECTS)
	+make -C libft clean
fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re

noflags: $(OBJECTS) libft
	$(CC) -o $@ $(OBJECTS) -Llibft -lft

