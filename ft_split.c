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

/*
** count words by returning times while loop for *s != c is called*/
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
	while ((s[length]) && (s[length] != c))
		length++;
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (0);
	i = 0;
	arr = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!arr)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = ft_substr(s, 0, word_length(s, c));
			if (!arr[i])
				return (NULL);
			i++;
			s += word_length(s, c);
		}
		else
			s++;
	}
	arr[i] = NULL;
	return (arr);
}

//determine how many strings to store
	//allocate space for individual string in array
	//ft_strlen()