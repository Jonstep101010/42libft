/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:05:38 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:04:28 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief scan initial n bytes of memory for char c
** @param ptr memory location to be scanned
** @param c character to search for
** @param n bytesize
** @details casts to unsigned char for comparison with c
** @return pointer to matching byte, NULL if not found
*/
void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*cast;
	size_t				i;

	i = 0;
	cast = (const unsigned char *) ptr;
	while (i < n)
	{
		if (cast[i] == (unsigned char) c)
			return ((void *) &cast[i]);
		i++;
	}
	return (0);
}
