/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:24:13 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:11:11 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*
** @brief duplicate a string through memory allocation
** @param s source string to copy
** @return pointer to copied string
** @details strlen, malloc used, guard for NULL,
** \details termination character and cast for return
*/
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s) + 1;
	ptr = (char *) malloc(size);
	if (!ptr)
		return (0);
	while (i < size - 1)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
