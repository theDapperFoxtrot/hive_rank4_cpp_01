NAME = braiiiiiiinnnzzzz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++20 -g
SRCS = main.cpp \
	newZombie.cpp \
	randomChump.cpp \
	# zombie.cpp \

OBJ_DIR = objects
OBJS = $(addprefix $(OBJ_DIR)/,  $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all