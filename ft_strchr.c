/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:51:00 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/23 16:00:23 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//searches string for first occurrence of char 'c'
//includes termination char
//returns pointer to char if found
//returns NULL if not

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *) str;
	if (*ptr == (char) c)
		return (ptr);
	while (*ptr++)
		if (*ptr == (char) c)
			return (ptr);
	return (0);
}

//char	str[] = "Hello, World";

//	if ((strchr(str, 'd')) == (ft_strchr(str, 'd')))
//		printf("\nsuccess on retval(%s , %s)\n",
// strchr(str, 'd'), ft_strchr(str, 'd'));
