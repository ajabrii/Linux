CC = cc
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRC = mandatory/check.c mandatory/libft.c mandatory/main.c mandatory/sort.c mandatory/sort1.c mandatory/parcing.c
SRC += utils/split.c utils/ft_strcnmp.c utils/substr.c utils/utilss.c utils/tools.c
SRC += op/push_op.c op/swap_op.c op/rotation_op.c op/reverce_r_op.c



OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)


clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all