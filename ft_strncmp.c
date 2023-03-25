/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:28:19 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/23 18:21:40 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare strings
//return less, equal or greater s2
//at most first n bytes

//pointer to values for comparison
//return s1 -s2, unless terminated

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	while (n-- > 0)
	{
		ps1 = (unsigned char *) s1++;
		ps2 = (unsigned char *) s2++;
		if (((*ps1) || (*ps2)) == 0)
			return (0);
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
	}
	return (0);
}

	//int				i;

	//i = 0;
//if (ps1[i] != ps2[i])
//			return (ps1[i] - ps2[i]);
//if ((ps1[i] == 0) || (ps2[i] == 0))
//	return (0);
//i++;

	//unsigned char	*ps1;
	//unsigned char	*ps2;

	//ps1 = (unsigned char *) s1;
	//ps2 = (unsigned char *) s2;
	//while (n-- > 0)
	//{
	//	if (((*ps1) || (*ps2)) == 0)
	//		return (0);
	//	if (*ps1 != *ps2)
	//		return (*ps1 - *ps2);
	//	ps1++;
	//	ps2++;