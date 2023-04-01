/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:34:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/31 19:54:49 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief iterates list and applies f on content
/// @param lst 
/// @param f function to apply to lst
/// @param del function to delete lst if required
/// @return 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	if ((!lst) || (!f))
		return (NULL);
	list = NULL;
	while (lst)
	{
		node = ft_lstnew((*f)(lst ->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst -> next;
	}
	return (list);
}
