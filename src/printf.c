#include "../printf.h"

/**
 * Counts the number of times we found %
 * We need to move the pointer after the find because if not, infinite loop
 */
int	count_arguments(char const *s)
{
	int	count;

	count = 0;
	while (s)
	{
		s = ft_strchr(s, '%');
		if (s)
		{
			count++;
			s++;
	
		}
	}	
	return (count);
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
	//va_list vargs;

	//va_start(vargs, i);
	ft_putnbr_fd(count_arguments(s), 1);
	//write(1, s, 1);
	return (0);
}
