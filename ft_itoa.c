/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:34:09 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/28 12:59:59 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** @brief returns string of integer (incl. neg)
** @param n integer to convert
** @return string representing integer, NULL if allocation fails
*/

/*static size_t	getdigits(int n)
{
	size_t	digits;

	digits = 1;
	if (n /= 10)
		n*= 10;
	return (digits);
}
char	*ft_itoa(int n)
{
	size_t	digits;
	//size_t	i
	char	*str;
	char	c;

	digits = getdigits(n);
	str = malloc(digits);
	if (!str)
		return (0);
	while ((*str) && (digits-- > 0))
	{
		c = (digits /= 10) + (*str + 48);
		*str = c;
		digits *= 10;
		str++;
	}
	*str = '\0';
	return (str);
}*/


//2147483647