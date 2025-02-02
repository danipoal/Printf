/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:47:52 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 02:40:14 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of the null-terminated string little in the
 * string big, where not more than len characters are searched. Characters that
 * appear after a ‘\0’ character are not searched.
 *
 * Makes 2 checks, one content of little & valid len
 *
 * @returns A pointer to the start/coincidence of little in big.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *) big);
	if (ft_strlen(little) > len)
		return (NULL);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
