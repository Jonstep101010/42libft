/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:00:50 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 01:42:38 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locate last ocurrence of char c (cast)
/// @param str string to search
/// @param c value of character to find
/// @return pointer to location of character, NULL if no ocurrence found
/// @details includes terminating \0
char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(str);
	ptr = (char *) str;
	if (ptr[len] == (char) c)
		return (&ptr[len]);
	while (len--)
		if (ptr[len] == (char) c)
			return (&ptr[len]);
	return (0);
}

//char	str[] = "Hello, World";

//	if ((strrchr(str, 'e')) == (ft_strrchr(str, 'e')))
//		printf("\nsuccess?\n'%s' ? '%s'\n", 
//strrchr(str, 'e'), ft_strrchr(str, 'e'));
