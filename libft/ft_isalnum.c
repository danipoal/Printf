/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:16:09 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/15 13:35:06 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Finds if the letter is a number or a letter
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
