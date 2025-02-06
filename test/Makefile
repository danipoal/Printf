NAME = test

CC = cc

FLAGS = -Wall -Wextra -Werror -I./../ -g

SRC = test.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c test.h
		$(CC) $(FLAGS) -g -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L./../ -l:libftprintf.a -l:libft/libft.a 

clean:
		rm -f $(OBJ)

f fclean: clean
		rm -f $(NAME)

re: f fclean clean all
