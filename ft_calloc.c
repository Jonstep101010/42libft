/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:03:34 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/27 18:17:55 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* @brief allocates and points to memory
** @param nitems number of elements to allocate
** @param size size of elements
** @return pointer to allocated memory, NULL if failure (1, for byte possible)
** @details ptr for memory space, iterating through and initializing,
** \details allocate using malloc, guarding for ptr being 0,
*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if ((nitems == 0) || (size == 0))
	{
		nitems = 0;
		size = 0;
	}
	ptr = malloc(nitems * size);
	if (ptr == 0)
		return (0);
	if (ptr)
		ft_bzero(ptr, nitems * size);
	return (ptr);
}

/*
** same as if and ft_bzero
	**while (i < (nitems * size))
	**{
	**	((unsigned char *) ptr)[i] = 0;
	**	i++;
	**}
*/