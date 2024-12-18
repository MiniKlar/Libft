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
	ft_calloc.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_atoi.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strjoin.c \
	ft_itoa.c \
	ft_substr.c \
	ft_split.c	\

OBJ = $(SRC:.c=.o)

SRCBONUS = ft_lstadd_front.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I. -o $@ -c $^

make: make all

bonus:	$(OBJ) $(OBJBONUS)
		ar rcs $(NAME) $(OBJ) $(OBJBONUS)

clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
