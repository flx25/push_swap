# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 09:42:12 by fvon-nag          #+#    #+#              #
#    Updated: 2023/03/09 08:12:00 by fvon-nag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c \
		operations.c\
		operations2.c\
		operations3.c\
		sortsmall.c\
		utils.c\
		sortbig.c\
		utils2.c\

BSOURCES = bonus_operations.c\
		bonus_operations2.c\
		bonus_operations3.c\
		utils2.c\
		utils.c\
		checker_main.c\
		bonus_utils.c\





OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS) libft
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -Llibft -lft

all: $(NAME) bonus

%.o: %.c
	$(CC) -c $(CFLAGS) $?

bonus: $(BOBJECTS) libft
	$(CC) $(CFLAGS) -o checker $(BOBJECTS) -Llibft -lft

libft:
	+make -C libft

clean:
	rm -f $(OBJECTS) $(BOBJECTS)
	+make -C libft clean
fclean: clean
	rm -f $(NAME) checker libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re

noflags: $(OBJECTS) libft
	$(CC) -o $@ $(OBJECTS) -Llibft -lft

