CC = cc
NAME = push_swap
B_NAME = checker
CFLAGS = -Wall -Wextra -Werror
#------------------
SRC = M/mandatory/check.c M/mandatory/libft.c M/mandatory/main.c M/mandatory/sort.c M/mandatory/sort1.c M/mandatory/parcing.c
SRC += M/utils/split.c M/utils/ft_strcnmp.c M/utils/substr.c M/utils/utilss.c M/utils/tools.c
SRC += M/op/push_op.c M/op/swap_op.c M/op/rotation_op.c M/op/reverce_r_op.c
#------------------
B_SRC = B/bonus/check_bonus.c B/bonus/libft_bonus.c B/bonus/main_bonus.c B/bonus/parcing_bonus.c
B_SRC += B/gnl/get_next_line.c  B/gnl/get_next_line_utils.c
B_SRC += B/op_bonus/push_op_bonus.c B/op_bonus/reverce_r_op_bonus.c B/op_bonus/rotation_op_bonus.c B/op_bonus/swap_op_bonus.c
B_SRC += B/utils_bonus/ft_strcnmp_bonus.c B/utils_bonus/split_bonus.c B/utils_bonus/substr_bonus.c B/utils_bonus/tools_bonus.c
B_SRC += B/utils_bonus/utilss_bonus.c
OBJ = $(SRC:.c=.o)
B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
bonus:$(B_NAME)

$(B_NAME):$(B_OBJ)
	$(CC) $(CFLAGS) -o $(B_NAME) $(B_OBJ)
clean:
	@rm -rf $(OBJ) $(B_OBJ)

fclean: clean
	@rm -rf $(NAME) $(B_NAME)

re: fclean all