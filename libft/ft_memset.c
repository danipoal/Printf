/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:19:09 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 03:57:48 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Fill memory with a constant byte. Fills the first n bytes of the memory area 
 * pointed to by s with the constant byte c.
 *
 * @retuns A pointer to the memory area s.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = (unsigned char)c;
		i++;
	}
	return ((void *) s_ptr);
}
