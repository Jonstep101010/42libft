/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:40:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/23 12:46:06 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//buffersize dstsize
//lenght for src and dst (not dstsize)
//dstsize being 0, or smaller than the length
//	returns with length of src and dstsize
//copies as long as src is & dstsize - 1 is respected
//terminates dst
//returns length of src and dst without termination

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while ((i < srclen) && (i + dstlen < dstsize - 1))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}

//if no NUL found, don't terminate, dst

//int	main(void)
//{
//	char	src[5] = "Great";
//	char	dst[5] = "dstst";

//	printf("\nlength: %lu", ft_strlcat(dst, src, sizeof(dst)));
//	printf("\ndst: %s\n", dst);
//	return (0);
//}
