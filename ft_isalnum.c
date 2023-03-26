/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:29:54 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/16 19:30:50 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h> */

/// @brief checks if given value is alphanumeric
/// @param c value of input character
/// @return 1 if true, 0 if not
int	ft_isalnum(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	if ((c > 96) && (c < 123))
		return (1);
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = '-';
	printf("Is c alphabetical?: %d\n", ft_isalnum(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalnum(c));
	c = 'z';
	printf("Is c alphabetical?: %d\n", ft_isalnum(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalnum(c));
	c = '3';
	printf("Is c alphabetical?: %d\n", ft_isalnum(c));
	printf("Is c alphabetical (orgf)?: %d\n", isalnum(c));
	return (0);
}*/
