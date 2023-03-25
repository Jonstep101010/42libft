/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:11:46 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/19 14:40:36 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_tolower(int ch)
{
	if ((ch > 64) && (ch < 91))
		ch = ch + 32;
	return (ch);
}

/*int	main(void)
{
	char	c;

	c = 'm';
	printf("%c", ft_tolower(c));
	c = 'D';
	printf("\n%c", ft_tolower(c));
	c = '9';
	printf("\n%c", ft_tolower(c));
	return (0);
}*/