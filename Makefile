NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = ./*.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) $(SRC)
		ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
