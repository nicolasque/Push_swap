# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3
NAME = a.out
SRC = main.c check_args.c free.c movements_a.c list_utils.c movements_b.c movements_comon.c ez_short.c
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	$(CC) $(CFLAGS) $(SRC) -L libft -lft -o $(NAME)

$(LIBFT):
	make -C libft

clean:
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re