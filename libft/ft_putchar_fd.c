/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:11:26 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/27 18:15:00 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character in a file. 
 * The write() returns the n bytes written, if 0 then error. Not implemented. 
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
