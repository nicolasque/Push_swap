# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 #-fsanitize=address
NAME = a.out
SRC =	main.c \
		free.c \
		list_utils.c


OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(MLX) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME)  -Llibft -lft $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) $(LIBFT)

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re