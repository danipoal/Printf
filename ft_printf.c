/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:21 by danalvar          #+#    #+#             */
/*   Updated: 2025/03/10 16:05:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(char const **s, va_list vargs, int *count)
{
	(*s)++;
	if ('c' == **s)
		ft_putchar_fd(va_arg(vargs, int), 1, count);
	else if ('s' == **s)
		ft_putstr_fd(va_arg(vargs, char *), 1, count);
	else if ('p' == **s)
		ft_putptr((unsigned long)va_arg(vargs, void *), HEX_MIN, count);
	else if ('d' == **s || 'i' == **s)
		ft_putnbr_base(va_arg(vargs, int), DECIMAL, count);
	else if ('u' == **s)
		ft_putnbr_ubase(va_arg(vargs, unsigned), DECIMAL, count);
	else if ('x' == **s)
		ft_putnbr_ubase(va_arg(vargs, unsigned int), HEX_MIN, count);
	else if ('X' == **s)
		ft_putnbr_base(va_arg(vargs, unsigned int), HEX_MAY, count);
	else if ('%' == **s)
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

	if (!s)
		return (-1);
	va_start(vargs, s);
	count = 0;
	while (*s)
	{
		if ('%' == *s)
			ft_conversion(&s, vargs, &count);
		else
			ft_putchar_fd(*s, 1, &count);
		s++;
	}
	va_end(vargs);
	return (count);
}
