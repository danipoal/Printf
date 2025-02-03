/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:20 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/03 18:53:38 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../ft_printf.h"

#include <unistd.h>
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb, char *base)
{
	int	base_len;
	int	index;

	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		ft_putnbr(nb / base_len, base);
		index = nb % base_len;
		write(1, &base[index], 1);
	}
	if (nb < base_len)
		write(1, &base[nb], 1);
}

int	main(void)
{
	ft_putnbr(233, "0123456789");
	write(1, "\n", 1);
	ft_putnbr(2, "01");
	return (0);
}
