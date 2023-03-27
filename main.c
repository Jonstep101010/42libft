/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:18:28 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/27 19:33:15 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//just for testing makefile and functions as well as header
//cc -Wall -Wextra  *.c && ./a.out

#include "libft.h"
#include <stdlib.h>
//test_functionname();

int	main(void)
{
	const char	*s1 = "Hello, He";
	const char	*s2 = "He";

	printf("\n'%s'\n", ft_strtrim(s1, s2));
	return (0);
}
	//substrtest();
	//memchrtest();
	//memcmptest();
	//strnstrtest();
	//strncmptest();	void strjointest();