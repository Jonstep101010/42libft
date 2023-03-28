/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:06:22 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/28 18:13:55 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while ((*s != c) && (*s))
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while ((*s) && (*s != c))
	{
		length++;
		s++;
	}
	return (length);
}

/**
** @brief 
** @param s string to be split
** @param c delimiter char
** @return array of new strings - resulting from split,
** \return NULL if allocation fails
** @details allocates, returns array of strings (by splitting s using c);
** \details array has to end with a NULL pointer; use malloc, free
** \details handle leading & trailing delimiting characters - no empty substrings
** \details allocated memory freed, no manipulation of input 
** \details (edge: empty input, only delimiter, no delimiter: return array input)
*/
char	**ft_split(char const *s, char c)
{
	char	**arr_s;
	int		count;
	int		i;

	if (!s)
		return (0);
	i = 0;
	arr_s = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!arr_s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			arr_s[i] = ft_substr(s, 0, word_length(s, c));
			if (!arr_s[i])
				return (NULL);
			i++;
			s += word_length(s, c);
		}
		else
			s++;
	}
	arr_s[i] = NULL;
	return (arr_s);
}

//determine how many strings to store
	//allocate space for individual string in array
	//ft_strlen()