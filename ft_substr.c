/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:59:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/15 19:00:39 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*helper_copy_terminate(char *substr, char const *s, size_t len)
{
	ft_strlcpy(substr, s, len);
	ft_strlcat(substr, "", len);
	return (substr);
}

/*
** @brief return substring for string - allocate memory
** @param s string from which to create substring
** @param start start index of substring in s
** @param len maximum length of substring
** @return substring, NULL if allocation fails
** @details check if string is empty, set length of string
** \details guard against index start being greater than length -
** \details return "" (size 1); check len against size - index (substr)
** \details if so: set len to them; allocate with malloc(len+1)
** \details check for empty substr; set to values in string for <len
** \details terminate & return
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = (char *) malloc(len + 1);
	if (substr)
		return (helper_copy_terminate(substr, s + start, len + 1));
	return (0);
}

/*alternative without calls to ft_strlc...*/
/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	while (start < slen && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
} */
