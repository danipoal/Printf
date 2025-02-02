/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:43:54 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/17 12:33:24 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts a string to an integer. Converts the initial portion of the string 
 * pointed to by nptr to int.
 *
 * First skips all the space b the rule isspace(3), and then check only 1 sign
 * 
 * @retuns Converted value or 0 on error.
 */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	total;
	int	sign;

	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\t' || *nptr == '\v')
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	total = 0;
	i = 0;
	while (nptr[i] != '\0')
	{
		if (!ft_isdigit(nptr[i]))
			return (total * sign);
		total = total * 10 + nptr[i] - '0';
		i++;
	}
	return (total * sign);
}
