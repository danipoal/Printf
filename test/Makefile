NAME = test

CC = cc

FLAGS = -Wall -Wextra -Werror -I./../ -g -O0

SRC = test.c unit_test.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c test.h
		$(CC) $(FLAGS) -g -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -g -o $(NAME) $(OBJ) -L./../ -l:libftprintf.a 

clean:
		rm -f $(OBJ)

f fclean: clean
		rm -f $(NAME)

re: f fclean clean all
