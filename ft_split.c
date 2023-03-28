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
			while ((*s != c) && *s)
				s++;
		}
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
	char	*arr;
	int		count;
	int		length;
	size_t	i;
	size_t	x;

	if (!s)
		return (0);
	i = 0;
	x = 0;
	count = word_counter(s, c);
	length = word_length(s, c);
	printf("\ncount: %d\nlength: %d\n", count, length);
	arr_s = (char **) malloc(ft_strlen(s));
	if (!arr_s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			while ((*s) && (*s != c))
			{
				arr = ft_substr(s, x, length + 1);
				arr_s[i][x] = arr[x];
				x++;
				s++;
			}
		}
		//printf("%c", arr[i]);
		i++;
		s++;
		x = 0;
	}
	if (!arr_s)
		return (0);
	return (arr_s);
}	

//determine how many strings to store
	//allocate space for individual string in array
	//ft_strlen()