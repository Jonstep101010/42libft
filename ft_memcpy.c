/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:36:31 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/24 16:07:04 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies data from src pointer to dst pointer
/// @param dst pointer  to array
/// @param src pointer to source
/// @param n bytes to copy
/// @return returns pointer to dst if successful, otherwise NULL
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	const char		*s = src;

	i = 0;
	d = dst;
	if (!d && !s)
		return (0);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}

//int	main(void)
//{
//	const char	src[50] = "Hello, would you like apples?";
//	char	dst[50] = "No apples for me!!";

//	printf("%s", ft_memcpy(dst, src, strlen(src) + 1));
//	return (0);
//}

	//size_t			i;
	//size_t			x;
	//unsigned char	*ptr1;
	//const void		*ptr;
	//const void		y = '\0';

	//ptr = src;
	//i = 0;
	//x = 0;
	//while (*src != y)
	//{
	//	*ptr = *src;
	//}
	//while (i < n)
	//{
	//	dst[i] = ptr1[i];
	//	x++;
	//}
	//return (dst);