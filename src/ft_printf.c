/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:21 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/13 16:08:58 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
/**
 * We print a NULL parameter depending in the conversion
 * Note that we also pop the null value from the original va_list
 */
static void	ft_print_null(char const **s, va_list vargs, int *count)
{
	va_arg(vargs, void *);
	(*s)++;
	if (ft_strchr("s", **s))
		ft_putstr_fd("(null)", 1, count);
	else if (ft_strchr("p", **s))
		ft_putstr_fd("(nil)", 1, count);
	else if (ft_strchr("cdiuxX", **s))
		ft_putchar_fd('0', 1, count);
	else
		(*count)++;
}

void	ft_conversion(char const **s, va_list vargs, int *count)
{
	(*s)++;
	if ((ft_strchr("c", **s))
		ft_putchar_fd(va_arg(vargs, int), 1, count);
	else if (ft_strchr("s", **s))
		ft_putstr_fd(va_arg(vargs, char *), 1, count);
	else if (ft_strchr("p", **s))
		ft_putptr((unsigned long)va_arg(vargs, void *), HEX_MIN, count);
	else if (ft_strchr("d", **s) || ft_strchr("i", **s)) 
		ft_putnbr_base(va_arg(vargs, int), DECIMAL, count);
	else if (ft_strchr("u", **s))
		ft_putnbr_ubase(va_arg(vargs, unsigned), DECIMAL, count);
	else if (ft_strchr("x", **s))
		ft_putnbr_ubase(va_arg(vargs, unsigned int), HEX_MIN, count);
	else if (ft_strchr("X", **s))
		ft_putnbr_base(va_arg(vargs, unsigned int), HEX_MAY, count);
	else
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

	if (!s)
		return (-1);
	va_start(vargs, s);
	count = 0;
	while (*s)
	{
		if ((ft_strchr("%", *s)))
		{
			va_copy(vcpy, vargs);
			if (va_arg(vcpy, void *) == NULL)
				ft_print_null(&s, vargs, &count);
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
