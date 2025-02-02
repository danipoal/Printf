/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:25:35 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/31 15:16:10 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Free the memory of the element passed as parameter using the 'del' function 
 * then free(3). The memory of 'next' must not be freed.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
		del(lst->content);
	free(lst);
}
