/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:38:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/19 14:40:40 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

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
