/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 00:12:40 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies n bytes from one memory location to another
/// @param dst pointer to dst memory location
/// @param src pointer to src memory location
/// @param n bytes to copy
/// @return value of dst
/// @details possible if pointers overlap (no tmp array due to restrictions)
/// \details casts ptrsrc then copies to casted ptrdst
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*ptrdst;
	char			*ptrsrc;

	ptrdst = (char *) dst;
	ptrsrc = (char *) src;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (n--)
			*ptrdst++ = *ptrsrc++;
	}
	else
	{
		while (n > 0)
		{
			ptrdst[n - 1] = ptrsrc[n - 1];
			n--;
		}
	}
	return (dst);
}

//int	main(void)
//{
//	char	src[7] = "newdest";
//	//char		dst[7] = "olddest";
//	size_t		n;

//	n = 4;
//	//char *new_arr1 = &arr[3];
//	printf("before move:\nsrc = %s\n\n", src);
//	//printf("ft_memove: %s", ft_memmove(new_arr1, arr, sizeof(int) * 5));
//	printf("\n%s!\n", ft_memmove(src+3, src, n));
//	if (strcmp(src+3, "newd") != 0)
//		printf("\nError: expected output is: 'newd'\nYours: %s", src+3);
//	else
//		printf("success!\n");
//	//printf("after move:\nsrc = %s\n", src);
//	return (0);
//}
