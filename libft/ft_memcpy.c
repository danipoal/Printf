/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:36:50 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/17 13:58:12 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copy memory area. Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.  Use memmove(3) if the memory areas do 
 * overlap.
 * 
 *
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (src == NULL && dest == NULL)
		return (dest);
	dst_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (n > 0)
	{
		*(dst_ptr++) = *(src_ptr++);
		n--;
	}
	return (dest);
}
