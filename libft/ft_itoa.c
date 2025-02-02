/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:44:44 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/27 19:04:47 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Get the length of the number dividing it by base 10. Starting by 1 because
 * it always will fit at least 1 space
 *
 * If it is negative, sum an adicional number and recalculate the absolute val
 */
static int	num_length(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

static char	*fill_number(char *str, int n, int len, int i)
{
	int	dec;

	dec = 1;
	while (n / dec >= 10)
		dec *= 10;
	while (i < len)
	{
		str[i] = n / dec + '0';
		n -= n / dec * dec;
		dec /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * Converts an integer to a char number
 */
char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = num_length(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	fill_number(str, n, len, i);
	return (str);
}
