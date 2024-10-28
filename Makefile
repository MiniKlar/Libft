NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_isascii.c \
	ft_putstr_fd.c \
	ft_isdigit.c \
	ft_strrchr.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) *.o

%.o: %.c
	$(CC) $(CFLAGS) -I. -o $@ -c $^

make: make all

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re