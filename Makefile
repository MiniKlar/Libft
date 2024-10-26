NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c libft.h
OBJ = $(SRC:.c .h=.o)

all = $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re