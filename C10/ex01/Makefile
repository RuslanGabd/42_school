# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 12:07:49 by rgabdrak          #+#    #+#              #
#    Updated: 2024/07/29 13:53:57 by rgabdrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_cat.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_cat
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
