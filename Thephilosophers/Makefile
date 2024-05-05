CC = cc
NAME = philo

CFLAGS = -Wall -Wextra -Werror
#------------------
SRC = philos/main.c philos/eating.c philos/monitors.c philos/getters.c philos/philosophers.c philos/routine.c
SRC += philos/utils/split.c philos/utils/ft_strcnmp.c philos/utils/substr.c philos/utils/utilss.c philos/utils/tools.c
SRC += philos/time.c philos/tools.c philos/setters.c philos/cleanup.c
#------------------

OBJ = $(SRC:.c=.o)
B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)