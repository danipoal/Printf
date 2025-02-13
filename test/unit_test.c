/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:25:31 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/13 15:41:41 by danalvar         ###   ########.fr       */
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
void	printf_unit_test(char *title, char *s, void *arg)
{
	int	a = 1;
	int	b = 2;

	ft_printf(title);
	if (!strcmp(s, "'%c'"))
	{
		char *cp = (char *) arg;
		a = printf(s, cp[0]);
		b = ft_printf(s, cp[0]);
	}
	else if(!strcmp(s, "'%s'"))
	{
		char * cp = (char *) arg;
		a = printf(s, cp);
		b = ft_printf(s, cp);
	}
	else if(!strcmp(s, "'%p'"))
	{
		a = printf(s,(void *) arg);
		b = ft_printf(s, arg);
	}
	else if(!strcmp(s, "'%u'"))
	{
		unsigned int	*cp = (unsigned int *) arg;
		a = printf(s, cp);
		b = ft_printf(s, cp);
	}
	else if(!strcmp(s, "'%f'"))
	{
		double *cp = (double *) arg;
		a = printf(s, *cp);
		b = ft_printf(s, *cp);
	}
	else if(!strcmp(s, "'%i'") || !strcmp(s, "'%d'"))
	{
		int	*cp = (int *) arg;
		a = printf(s, *cp);
		b = ft_printf(s, *cp);
	}
	else if(!strcmp(s, "'%x'"))
	{
		int	*cp = (int *) arg;
		a = printf(s, *cp);
		b = ft_printf(s, *cp);
	}
	else if(!strcmp(s, "'%X'"))
	{
		int	*cp = (int *) arg;
		a = printf(s, *cp);
		b = ft_printf(s, *cp);
	}
	else if(!strcmp(s, "'%%'"))
	{
		a = printf(s, arg);
		b = ft_printf(s, arg);
	}
	check_return_bytes(a, b);
}
