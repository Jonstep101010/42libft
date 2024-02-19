/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:34:09 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/20 20:05:36 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*convert_int(char *s, size_t digits, long int num, int n);
static size_t	ndigits(long int n);

/**
 * @brief convert int to char string
 * @param n int to convert
 * @return pointer to char string, NULL if allocation fails
 */
char	*ft_itoa(int n)
{
	size_t		digits;
	char		*s;
	long int	num;

	num = n;
	digits = ndigits(num);
	s = ft_calloc(sizeof(char), digits + 1);
	if (!s)
		return (NULL);
	if (num < 0)
		num *= -1;
	return (convert_int(s, digits, num, n));
}

static size_t	ndigits(long int n)
{
	size_t		digits;
	long int	num;

	num = n;
	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	if (num < 0)
		digits++;
	return (digits);
}

static char	*convert_int(char *s, size_t digits, long int num, int n)
{
	while (digits--)
	{
		*(s + digits) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*s = '-';
	return (s);
}
