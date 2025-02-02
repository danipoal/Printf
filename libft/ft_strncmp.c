/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:32:45 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/31 17:40:15 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Like strcmp, except it compares only the first (at most) n bytes of s1
 * and s2. Returns 0 if are equal. Positive if s1 is + than s2,...
 * Uses unsigned to check extensioned Ascii 
 *
 * If it reaches a point where both are null, return 0
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((s1[i] || s2[i]) && str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
