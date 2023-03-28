/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:18:28 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/28 17:45:05 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//just for testing makefile and functions as well as header
//cc -Wall -Wextra  *.c && ./a.out

#include "libft.h"
#include <stdlib.h>
//test_functionname();

int	main(void)
{
	char const	s[] = "Test space delimiter";
	char		c;
	c = ' ';
	//char	str[] = "Test space delimiter";
	//char	*token = strtok(str, &c);

	//while (token != NULL)
	//{
	//	printf("\n%s", token);
	//	token = strtok(NULL, &c);
	//}
	//printf("\n");
	ft_split(s, c);
	return (0);
}
	//substrtest();
	//memchrtest();
	//memcmptest();
	//strnstrtest();
	//strncmptest();	void strjointest();
		//char const	s[] = "Test space delimiter";
	//char		c;

	//c = ' ';
	//char	str[] = "Test space delimiter";
	//char	*token = strtok(str, " ");

	//while (token != NULL)
	//{
	//	printf("\n%s", token);
	//	token = strtok(NULL, " ");
	//}
	//printf("\n");

	//int		n = 9234;
	////char	result[50];

	////sprintf(result, "%d", n);
	////printf("\nString for num is '%s'", result);
	////getchar();
	//printf("\nString for num is '%s'\n", ft_itoa(n));