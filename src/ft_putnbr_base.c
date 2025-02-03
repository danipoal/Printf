/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:20 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/03 19:57:02 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long nb, char *base)
{
	int	base_len;
	int	index;

	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		index = nb % base_len;
		write(1, &base[index], 1);
	}
	if (nb < base_len)
		write(1, &base[nb], 1);
}

void	ft_putptr(long nb, char *base)
{
	write(1, "0x", 2);
	ft_putnbr_base(nb, base);
}
