/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:48:36 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/03 16:37:15 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Create dinamic memory and initialize it with 0s
 *
 * Unsigned char is used to interact with elemts byte by byte. We could check
 * if nmemb * size overflows ULONG_MAX but the original dont check it
 *
 * @param nmemb An array of the number of elements to save
 * @param size The byte size of the elemets
 * @return A pointer created or malloc(1) if 0 size * mmemb
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*s;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > INT_MAX / size)
		return (NULL);
	s = (unsigned char *) malloc(nmemb * size);
	if (!s)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		s[i++] = 0;
	return ((void *)s);
}
