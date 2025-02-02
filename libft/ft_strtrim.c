/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 02:40:49 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 06:27:00 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * Delete all the characters found in set, in the begining and the end until a
 * diferent character is found in the string.
 *
 * @retuns The resultant string
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}
