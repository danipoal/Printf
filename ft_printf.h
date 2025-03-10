/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:10:07 by danalvar          #+#    #+#             */
/*   Updated: 2025/03/10 16:11:23 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

# define HEX_MAY "0123456789ABCDEF"
# define HEX_MIN "0123456789abcdef"
# define DECIMAL "0123456789"

int		ft_printf(char const *s, ...);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	ft_putnbr_base(long nb, char *base, int *count);
void	ft_putptr(unsigned long nb, char *base, int *count);
void	ft_putdec_base(double nb, char *base);
void	ft_putstr_fd(char *s, int fd, int *count);
void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putnbr_ubase(unsigned long nb, char *base, int *count);

#endif
