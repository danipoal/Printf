/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:20 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/26 21:24:28 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long nb, char *base, int *count)
{
	int	base_len;
	int	index;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar_fd('-', 1, count);
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base, count);
		index = nb % base_len;
		ft_putchar_fd(base[index], 1, count);
	}
	if (nb < base_len)
		ft_putchar_fd(base[nb], 1, count);
}

void	ft_putnbr_ubase(unsigned long nb, char *base, int *count)
{
	unsigned int	base_len;
	unsigned int	index;

	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		ft_putnbr_ubase(nb / base_len, base, count);
		index = nb % base_len;
		ft_putchar_fd(base[index], 1, count);
	}
	if (nb < base_len)
		ft_putchar_fd(base[nb], 1, count);
}

void	ft_putptr(unsigned long nb, char *base, int *count)
{
	if (nb > 0)
	{
		*count += write(1, "0x", 2);
		ft_putnbr_ubase(nb, base, count);
	}
	else
		*count += write(1, "(nil)", 5);
}

/*void	ft_putdec_base(double nb, char *base)
{
	int		base_len;
	int		index;
	int		precision_limit;
	long	int_nbr;

	int_nbr = (long) nb;
	ft_putnbr_base(int_nbr, base, 0);
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
}*/
