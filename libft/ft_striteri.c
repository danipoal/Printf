/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:11:11 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/27 18:40:24 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Modifies every char in the string given with the function passed. Like 
 * strmapi but instead of passing the char, passing the string by reference.
 * No need to save memory neither create a new string. 
 *
 * @retuns Dont return anything, because change by reference the string.
 *
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
