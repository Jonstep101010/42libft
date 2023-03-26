/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:38:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/26 01:46:25 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief converts ascii alphabet values to uppercase
/// @param ch value of character
/// @return value, whether modified or not
int	ft_toupper(int ch)
{
	if ((ch > 96) && (ch < 123))
		ch = ch - 32;
	return (ch);
}

/*int	main(void)
{
	char	c;

	c = 'm';
	printf("%c", ft_toupper(c));
	c = 'D';
	printf("\n%c", ft_toupper(c));
	c = '9';
	printf("\n%c", ft_toupper(c));
	return (0);
}*/