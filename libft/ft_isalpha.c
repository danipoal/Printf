/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:39:08 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/08 18:51:27 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks  for an alphabetic character; in the standard "C" locale,
 * it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
 * cales, there may be additional characters for which isalpha() is
 * true—letters which are neither uppercase nor lowercase.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
