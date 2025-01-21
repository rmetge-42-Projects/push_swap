NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -rf

SRC = swap.c \
	push.c\
	rotate.c\
	lib_lst.c\
	lib_lst_2.c\
	reverse_rotate.c\
	main.c\
	error.c\
	liste_chaine.c\
	trie_small.c\
	trie_long.c\
	coup.c\

OBJ_DIR = obj
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_PATH) -I. -c $< -o $@

all: ${NAME}

${NAME}: $(LIBFT) $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH) bonus

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

norminette:
	@-norminette | grep -E --color=always "Error" || echo "Norminette: Everything is fine!"

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

PHONY: all clean fclean re libft