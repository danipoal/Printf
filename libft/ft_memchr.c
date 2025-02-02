/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:21:09 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 02:39:52 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Scan memory for a character
 *
 * Scans  the initial n bytes of the memory area pointed to by s for the first 
 * instance of c.  Both c and the bytes of the memory area pointed to by s are
 * interpreted as unsigned char.
 *
 * @return A pointer to the matching byte or NULL if the character does not 
 * occur in the given memory area.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
