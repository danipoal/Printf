/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:21:03 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/16 18:54:19 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Concatenates two strings securing the buffer
 *
 * If size <= 0 return the len of the src, and stops
 * If destlen > size, means the content on dst surpass size or no NUL is found
 * on dest.Then no cat and retuns size + srclen () because we asume destlen is  
 * size. 
 *
 * It copies while iteration i dont surpass length of src and if the iteration +
 *  dstlen(what was already in dst), dont surpass size - 1 (for the '\0')
 *
 * @param size Is the total size of the buffer dst
 *
 * @return The total length of the char* tryed to be created
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (size + srclen);
	i = 0;
	while (i < srclen && i + dstlen < size - 1)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (srclen + dstlen);
}
