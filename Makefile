# -*- MakeFile -*-

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

all: libft

print:
	echo $(OBJS)

%.o: ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

libft: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o libft

run: libft
	./libft $(ARGS)

clean:
	rm *.o

fclean:
	rm *.o libft