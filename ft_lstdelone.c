/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:49:30 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/31 18:53:14 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief deletes and frees given nnode and its successors
/// @param lst node to free
/// @param del address of function used to delete content
/// @details pointer to list must be set to NULL
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
		del(lst -> content);
	free(lst);
}
