/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:38:38 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/30 02:34:42 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterate over the list 'lst' and apply the function 'f' to the content of
 * each elements. Create a new list resulting of the successive applications
 * of 'f'. The function 'del' is used to destroy the content of an element if 
 * necessary.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_list;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		tmp = ft_lstnew(new_content);
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			free(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, tmp);
		lst = lst->next;
	}
	return (new_list);
}
