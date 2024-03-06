# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 #-fsanitize=address
NAME = a.out
SRC =	main.c \
		free.c


OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME)  -Llibft $(OBJ)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re