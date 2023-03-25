/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:47:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/20 20:27:19 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copy src to dst of size
//at most copy size-1
//terminates unless size == 0
//return length of src
//if return greater size, terminate dst

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
