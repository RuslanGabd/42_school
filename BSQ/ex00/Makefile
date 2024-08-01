NAME = bsq

CC = cc
INCLUDE = include
CFLAGS = -Wall -Wextra -Werror 

SRC = srcs/ft_print_solution.c srcs/ft_find_solution.c srcs/ft_verif_map.c srcs/ft_read_map.c srcs/ft_print.c srcs/ft_strlen.c srcs/ft_strcpy.c srcs/ft_get_chars.c srcs/ft_read_map_2.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME) $(SRC)
clean:
	$(SRC) -f *.o

fclean: clean
	$(SRC) -f $(NAME)

re: fclean all

