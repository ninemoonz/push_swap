NAME = push_swap

# Directories
LIBFT_DIR = ./libft
FT_PRINTF_DIR = ./ft_printf
SRC_DIR = ./src
INC_DIR = ./include

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

CC := cc
CFLAGS := -Wall -Wextra -Werror -I.
INCLUDE = -I$(INC_DIR) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

SRC = $(SRC_DIR)/main.c \
		
OBJ = $(SRC:%.c=%.o)

all: $(NAME) $(FT_PRINTF) $(LIBFT)

$(NAME): $(OBJ)
	ar rcs $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re