/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:26:54 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/16 17:32:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies up to size - 1 characters from the NUL-terminated string src to
 * dst, NUL-terminating the result.
 * 
 * @param size Is the size of the destination char*. 
 *
 * @return The size of the string tryed to create.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
