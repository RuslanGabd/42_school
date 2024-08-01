# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:41:27 by rgabdrak          #+#    #+#              #
#    Updated: 2024/07/30 16:41:31 by rgabdrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_atoi.c srcs/ft_strlen.c srcs/ft_error.c srcs/ft_tail.c srcs/ft_count_characters.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_tail
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
