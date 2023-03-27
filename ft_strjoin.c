/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:28:24 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/27 18:39:47 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcat;
	size_t	strlen;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	strlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	strcat = (char *) malloc(strlen);
	if ((!s1) && (!s2))
		strcat[i] = '\0';
	if (!strcat)
		return (0);
	while ((i < ft_strlen(s1)) && (i < strlen))
	{
		strcat[i] = s1[i];
		i++;
	}
	while (i < strlen)
	{
		strcat[i] = s2[x];
		x++;
		i++;
	}
	return (strcat);
}*/

/*
** @brief allocates and returns new string, concatenation s1 and s2
** @param s1 prefix string
** @param s2 suffix string
** @return new string, NULL if allocation fails
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcat;
	size_t	s1_size;
	size_t	s2_size;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	strcat = malloc(s1_size + s2_size + 1);
	if (strcat == 0)
		return (0);
	ft_strlcpy(strcat, s1, s1_size + 1);
	ft_strlcat(strcat, s2, s1_size + s2_size + 1);
	return (strcat);
}
