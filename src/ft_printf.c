/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:21 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/12 13:42:33 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_null(char const s, int *i, int *count)
{
	if (ft_strchr("s", s))
		ft_putstr_fd("(null)", 1, count);
	else if (ft_strchr("p", s))
		ft_putstr_fd("(nil)", 1, count);
	(*i)++;
}

int	ft_conversion(char const *s, int i, va_list vargs, int *count)
{
	if ((ft_strchr("c", s[i + 1]))) //CHAR
		ft_putchar_fd(va_arg(vargs, int), 1, count);
	else if (ft_strchr("s", s[i + 1])) // STRING
		ft_putstr_fd(va_arg(vargs, char *), 1, count);
	else if (ft_strchr("p", s[i + 1])) // VOID * Puntero
		ft_putptr((long)va_arg(vargs, void *), HEX_MIN, count);
	else if (ft_strchr("d", s[i + 1])) // INT b10 ERROR
		ft_putdec_base((double)va_arg(vargs, double), "0123456789");
	else if (ft_strchr("i", s[i + 1])) // INT b10
		ft_putnbr_base(va_arg(vargs, int), "0123456789", count);
	else if (ft_strchr("u", s[i + 1])) // Decimal Base 10 unsigned
		ft_putdec_base(va_arg(vargs, unsigned int), "0123456789");
	else if (ft_strchr("x", s[i + 1])) // Hex min
		ft_putnbr_base((long) va_arg(vargs, void *), HEX_MIN, count);
	else if (ft_strchr("X", s[i + 1])) // Hex min
		ft_putnbr_base(va_arg(vargs, int), HEX_MAY, count);
	else if (ft_strchr("%", s[i + 1]))
		ft_putchar_fd('%', 1, count);
	i++;
	return (i);
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
	int	i;

	va_start(vargs, s);
	i = 0;
	count = 0;
	while (*s)
	{
		if ((ft_strchr("%", *s)))
		{
			va_copy(vcpy, vargs);
			if (va_arg(vcpy, void *) == NULL)
				ft_print_null(*(s + 1), &i, &count); // Check si estra bien
			else
				i = ft_conversion(s, i, vargs, &count);
		}
		else
			ft_putchar_fd(*s, 1, &count);
		s++;
		i++;
	}
	va_end(vargs);
	return (0);
}
