/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:47:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 01:35:29 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copy src to dst of size
/// @param dst pointer to string
/// @param src pointer to string
/// @param size size of destination buffer
/// @return length of src, if return > size, terminate dst
/// @details at most copy size-1
/// \details terminates unless size == 0
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
	{
		return (i);
	}
	while ((src[x] != '\0') && (x < size - 1))
	{
		dst[x] = src[x];
		x++;
	}
	if ((src[x] == '\0') || (x == size -1))
	{
		dst[x] = '\0';
	}
	return (i);
}
