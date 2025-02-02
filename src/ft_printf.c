#include "../ft_printf.h"

/**
 * Counts the number of times we found %
 * We need to move the pointer after the find because if not, infinite loop
 */
int	count_arguments(char const *s)
{
	int	count;

	count = 0;
	while ((s = ft_strchr(s, '%')))
	{
		count++;
		s++;
	}	
	return (count);
}

int	ft_handle_int(int n)
{
		ft_putnbr_fd(n, 1);
		return (0);
}

/**
 * Main function printf
 *
 * @param s Is the string with all the content to print
 * @param ... Are the variadic arguments, from 0 to infinite
 *
 * @return The number of characters printed (excluding the null byte).
 */
int	ft_printf(char const *s, ...)
{
	va_list vargs;
	int	i;

	va_start(vargs, s);
	//ft_putnbr_fd(count_arguments(s), 1);

	i = 0;
	while (s[i])
	{
		if ((ft_strchr("%i", s[i])))
			ft_handle_int(va_arg(vargs, int));
		i++;
	}
	va_end(vargs);
	return (0);
}
