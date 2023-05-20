/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:34:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/20 22:18:36 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief iterates list and applies f on content
** @param lst list to be iterated over, function applied and copy returned
** @param f function to apply to contents of lst
** @param del function used to delete, if necessary
** @return list, NULL if allocation fails
** @details memory leak on --strict, should be ok (cwenz)
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*content;

	if ((!lst) || (!f))
		return (NULL);
	list = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			(*del)(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst -> next;
	}
	return (list);
}
