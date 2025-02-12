/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:33:21 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/12 13:24:32 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}

void	ft_putchar_fd(char c, int fd, int *count)
{
	*count += write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd, int *count)
{
	*count += write(fd, s, ft_strlen(s));
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char) c && *s)
		s++;
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}
