#include "../ft_printf.h"

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
	i = 0;
	while (s[i])
	{
		if ((ft_strchr("%", s[i])))
		{

			if ((ft_strchr("c", s[i + 1]))) //CHAR
				ft_putchar_fd(va_arg(vargs, int), 1);
			else if (ft_strchr("s", s[i + 1])) // STRING
				ft_putstr_fd(va_arg(vargs, char *), 1);
			else if (ft_strchr("p", s[i + 1])) // VOID * Puntero
				ft_putptr((long)va_arg(vargs, void *), "0123456789abcdef");
			else if (ft_strchr("d", s[i + 1])) // INT b10
				ft_putdec_base((double)va_arg(vargs, double), "0123456789");
			else if (ft_strchr("i", s[i + 1])) // INT b10
				ft_putnbr_base(va_arg(vargs, int), "0123456789");
			else if (ft_strchr("x", s[i + 1])) // Hex min
				ft_putnbr_base((long) va_arg(vargs, void *), "0123456789abcdef");
			else if (ft_strchr("X", s[i + 1])) // Hex min
				ft_putnbr_base(va_arg(vargs, int), "0123456789ABCDEF");
			//if (ft_strchr("u", s[i + 1])) // Decimal Base 10 unsigned

			i++;
		}
		else 
			ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(vargs);
	return (0);
}
