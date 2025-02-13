#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include "../ft_printf.h"
# include <limits.h>

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"

void	printf_unit_test(char *title, char *s, void *arg, size_t size);


#endif
