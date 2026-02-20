NAME = push_swap

# Directories
LIBFT_DIR = ./libft
FT_PRINTF_DIR = ./ft_printf

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

# Compiler and flags
CC := cc
CFLAGS := -Wall -Wextra -Werror -I./libft -I./ft_printf  -I.

SRC = push_swap.c \
	num_check.c \
	print_error.c \
	ps_utils.c \
	
# COLORS FOR OUTPUT
GREEN = \033[0;31m
RED = \033[0;31m
RESET = \033[0m

OBJ = $(SRC:.c=.o)

# RULES
all:  $(LIBFT) $(FT_PRINTF) $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)Linking $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(RESET)"

%.o: %.c
	@echo "$(GREEN)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@echo "$(GREEN)Building libft...$(RESET)"
	make -C $(LIBFT_DIR)

$(FT_PRINTF):
	@echo "$(GREEN)Building ft_printf...$(RESET)"
	make -C $(FT_PRINTF_DIR)

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean
	@make -C $(FT_PRINTF_DIR) clean
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean
	@echo "$(RED)Cleaning executables and libraries...$(RESET)"
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean
	@echo "$(RED)Everything cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re