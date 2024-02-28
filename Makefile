NAME	= rush-02
OBJ_DIR	= .
SRC_DIR	= .
OBJS	= $(OBJ_DIR)/main.c \
		  $(OBJ_DIR)/error.c \
		  $(OBJ_DIR)/read_numbers.c \

CFLAGS = -Wall -Wextra -Werror

$(NAME)	: $(OBJS)
	@cc $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@cc -c $(CFLAGS) $< -o $@

.PHONY : clean fclean
clean :
	@rm -f $(OBJ_DIR) $(NAME)

fclean :
	@rm -f $(MISC)
