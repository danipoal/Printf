NAME = libftprintf.a

CC = cc 
CFLAGS = -Wall -Werror -Wextra -g -O0
SRCS = ft_printf.c ft_putnbr_base.c ft_utils.c
HEAD = ft_printf.h
FOLDER = 

OBJS = $(addprefix $(FOLDER), $(SRCS:.c=.o))

# Regla general
all: $(NAME)

$(NAME): $(OBJS)
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
