/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:38:53 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 00:02:43 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE sizeof(c)

char	c[] = {0x80, NULL, 'a', '1'};*/

/// @brief checks if given value is an ascii character
/// @param c value of character
/// @return 1 if true, 0 if not
/// @details includes termination character, includes range from 0 to 127
int	ft_isascii(int c)
{
	if (c == '\0')
		return (1);
	if ((c > 0) && (c < 128))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	i;

	for (i = 0; i < SIZE; i++)
	{
		if (ft_isascii(c[i]))
			printf("Char %c is an ASCII character\n", c[i]);
		else
		{
			printf("Char %c is not an ASCII character\n", c[i]);
		}
	}
}*/
