/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:38:36 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/29 14:18:48 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Erases the data in the n bytes of the memory starting at the location pointed
 * to by s, by writing zeros (bytes containing '\0') to that area.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = 0;
		i++;
	}
}
