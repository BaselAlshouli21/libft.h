# -*- MakeFile -*-

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJ_DIC = obj
BIN_DIC = bin

OBJS = $(SRCS:%.c=$(OBJ_DIC)/%.o)

TARGET = $(BIN_DIC)/libft

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIC)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

run: all
	./$(TARGET) $(ARGS)

$(OBJ_DIC)/%.o: %.c | $(OBJ_DIC)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIC) $(BIN_DIC):
	mkdir -p $@
    
clean:
	rm -f $(OBJ_DIC)/*.o

fclean: clean
	rm -f $(TARGET)
	rm -rf $(OBJ_DIC) $(BIN_DIC)

re: fclean all

.PHONY: all clean fclean re run