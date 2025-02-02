/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:45:46 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/29 23:10:56 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from memory area src to memory area dest. The memory areas may
 * overlap: copying takes  place  as  though  the bytes in src are first copied 
 * into a temporary array that does not overlap src  or  dest,  and  the bytes 
 * are then copied from the temporary array to dest.
 *
 * In order to dont use malloc, instead of creating a temp array, if it overlaps
 * we will start copying from end to begining
 * 
 * @returns A pointer to dest
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned long	i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (d > s)
	{
		i = n;
		while (i--)
		{
			d[i] = s[i];
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return ((void *) d);
}
