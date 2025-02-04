/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:20 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/04 21:04:02 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long nb, char *base)
{
	int	base_len;
	int	index;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
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

void	ft_putdec_base(double nb, char *base)
{
	int		base_len;
	int		index;
	int		precision_limit;
	long	int_nbr;

	int_nbr = (long) nb;
	ft_putnbr_base(int_nbr, base);
	nb = nb - int_nbr;
	base_len = ft_strlen(base);
	if (nb != 0)
	{
		precision_limit = 5;
		write(1, ".", 1);
		while (nb != 0 && precision_limit--)
		{
			nb *= base_len;
			index = (int) nb;
			write(1, &base[index], 1);
			nb -= index;
		}
	}
}
