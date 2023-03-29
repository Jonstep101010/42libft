/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:34:09 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/29 17:22:22 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** @brief returns string of integer (incl. neg)
** @param n integer to convert
** @return string representing integer, NULL if allocation fails
*/

static size_t	ndigits(int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		digits = 1;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t		digits;
	char		*str;
	long int	num;

	num = n;
	digits = ndigits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str = malloc(sizeof(char) * digits + 1);
	if (!str)
		return (0);
	*(str + digits) = '\0';
	while (digits--)
	{
		*(str + digits) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
