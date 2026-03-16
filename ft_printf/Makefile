NAME = libftprintf.a

CC := cc
CFLAGS := -Wall -Wextra -Werror -I.

SRC = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putunbr.c \
	ft_toupper.c \
	ft_puthex.c \
	ft_putuphex.c \
	ft_putptr.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re