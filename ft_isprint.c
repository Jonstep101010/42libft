/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:15:32 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/21 17:27:21 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>*/

int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 0;
	printf("Result of control char %c is passed: %d", c, ft_isprint(c));
	return (0);
}
*/