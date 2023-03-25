/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/22 18:00:07 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies n bytes from memory location (pointed by src)
//copies to buffer ptrsrc
//then copies to source
//possible if pointers overlap

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
