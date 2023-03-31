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

/// @brief itertes list and applies f on content
/// @param lst 
/// @param f 
/// @param del 
/// @return 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	if ((!lst) || (!f))
		return (NULL);
	//list = NULL;
	while (lst != NULL)
	{
		list = f(lst ->content);
		list = lst -> next;
		del(lst ->content);
		lst = lst -> next;
	}
	//if (!list)
	//	return (NULL);
	return (list);
}
