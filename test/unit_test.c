/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:25:31 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/13 14:13:59 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"




void	check_return_bytes(a, b)
{
	if (a != b)
		printf(RED "Error\n" RESET);
	else
		printf(GREEN "OK\n" RESET);
	ft_printf(RESET);
}


/**
 * El *s siempre vendra en formato '%x' osea el int que retorna es 2 + %x
 *
 */
void	printf_unit_test(char *title, char *s, void *arg, size_t size)
{
	int	a = 1;
	int	b = 2;

	ft_printf(title);
	if (size == sizeof(char))
	{
		char *cp = (char *) arg;
		printf(" Original");
		a = printf("'%c'", cp[0]);
		ft_printf(" Ft:");
		b = ft_printf(s, cp[0]);
	}
	else if(size == sizeof(char *))
	{
		char * cp = (char *) arg;
		printf(" Original");
		a = printf("'%s'", cp);
		ft_printf(" Ft:");
		b = ft_printf(s, cp);
	}
	else if(size == 99)   // Por alguna razon no entraba en sizeof(void *)
	{
		printf("P Original");
		a = printf("'%p'",(void *) arg);
		ft_printf(" Ft:");
		b = ft_printf(s, arg);
	}
	else if(size == sizeof(double))
	{
		double *cp = (double *) arg;
		printf(" Original");
		a = printf("'%f'", *cp);
		ft_printf(" Ft:");
		b = ft_printf(s, *cp);
	}
	else if(size == sizeof(int))
	{
		int	*cp = (int *) arg;
		printf(" Original");
		a = printf("'%i'", *cp);
		ft_printf(" Ft:");
		b = ft_printf(s, *cp);
	}
	else if(size == 16)
	{
		int	*cp = (int *) arg;
		printf(" Original");
		a = printf("'%x'", *cp);
		ft_printf(" Ft:");
		b = ft_printf(s, *cp);
	}
	else if(size == 17)
	{
		int	*cp = (int *) arg;
		printf(" Original");
		a = printf("'%X'", *cp);
		ft_printf(" Ft:");
		b = ft_printf(s, *cp);
	}
	else if (!arg)
	{
		printf(" Original");
		a = printf("'%%'");
		ft_printf(" Ft:");
		b = ft_printf(s);
	}
	check_return_bytes(a, b);
}
