/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:54:27 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/31 16:12:50 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** @brief adds node new at beginning of list
** @param lst address of pointer to first link in list
** @param new address of pointer for node to add
** @details new node is set to new head
** \details next is set to new node, pointer updated to new node
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((new) && (lst))
	{
		new -> next = *lst;
		*lst = new;
	}
}
