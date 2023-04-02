/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:59:32 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:15:56 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief copies with set removed from beginning and end of string
** @param s1 string to trim
** @param set reference set of characters to trim
** @return trimmed string, NULL if allocation fails
** @details allocates with malloc, after checking for empty strings;
** \details searching string for set of characters (while for beginning and end)
** \details ft_strlen to iterate from last, substr to cut to variables,
** \details guard for return;
** \details Example: set = "He", s1 = "HeHello, HeyHe" trim = "llo, Hey"
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	length;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while ((*s1) && ft_strchr(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while ((length > 0) && ft_strchr(set, s1[length - 1]))
		length--;
	trim = ft_substr(s1, 0, length);
	if (!trim)
		return (0);
	return (trim);
}
