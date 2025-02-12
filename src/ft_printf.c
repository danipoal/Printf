/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:21 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/12 14:11:51 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_null(char const **s, int *count)
{
	(*s)++;
	if (ft_strchr("s", **s))
		ft_putstr_fd("(null)", 1, count);
	else if (ft_strchr("p", **s))
		ft_putstr_fd("(nil)", 1, count);
	(*count)++;
}

void	ft_conversion(char const **s, va_list vargs, int *count)
{
	(*s)++;
	if ((ft_strchr("c", **s))) //CHAR
		ft_putchar_fd(va_arg(vargs, int), 1, count);
	else if (ft_strchr("s", **s)) // STRING
		ft_putstr_fd(va_arg(vargs, char *), 1, count);
	else if (ft_strchr("p", **s)) // VOID * Puntero
		ft_putptr((long)va_arg(vargs, void *), HEX_MIN, count);
	else if (ft_strchr("d", **s)) // INT b10 ERROR
		ft_putdec_base((double)va_arg(vargs, double), "0123456789");
	else if (ft_strchr("i", **s)) // INT b10
		ft_putnbr_base(va_arg(vargs, int), "0123456789", count);
	else if (ft_strchr("u", **s)) // Decimal Base 10 unsigned
		ft_putdec_base(va_arg(vargs, unsigned int), "0123456789");
	else if (ft_strchr("x", **s)) // Hex min
		ft_putnbr_base((long) va_arg(vargs, void *), HEX_MIN, count);
	else if (ft_strchr("X", **s)) // Hex min
		ft_putnbr_base(va_arg(vargs, int), HEX_MAY, count);
	else if (ft_strchr("%", **s))
		ft_putchar_fd('%', 1, count);
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
	va_list	vargs;
	int		count;
	va_list vcpy;

	va_start(vargs, s);
	count = 0;
	while (*s)
	{
		if ((ft_strchr("%", *s)))
		{
			va_copy(vcpy, vargs);
			if (va_arg(vcpy, void *) == NULL)
				ft_print_null(&s, &count);
			else
				ft_conversion(&s, vargs, &count);
		}
		else
			ft_putchar_fd(*s, 1, &count);
		s++;
	}
	va_end(vargs);
	return (count);
}
