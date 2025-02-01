NAME = libftprintf.a

CC = cc 
CFLAGS = -Wall -Werror -Wextra
SRCS = printf.c
FOLDER = src/

OBJS = $(addprefix $(FOLDER), $(SRCS:.c=.o))

# Regla general de compilacion de nueva libreria (No se coloca la lib que se usa como Libft.a, eso solo va en los includes)
all: $(NAME)

$(NAME):
	ar rcs $(NAME) $(OBJS)

# Regla compilacion .o . Si se toca el .h o Make, se recompila todo
%.o: %.c $(HEAD) Makefile
	$(CC) $(CFLAGS) -g -c $< -o $@

# Regla para limpiar objetos
clean:
	rm -rf $(OBJS)

# Regla para limpiar todo
f fclean: clean
	rm -rf $(NAME)

# Regla limpiar y recompilar
re: fclean all

.PHONY: clean fclean f re all
