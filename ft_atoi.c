/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:34:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:09:23 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief converts numbers in char str to integer
** @param str items to convert
** @return integer * notation (-prefix if found)
** @details only allows for one sign (+ or -) in front of numbers in string
** \details deals with whitespace
** \details converts using multiplication by 10, adding value,
** \details subtracting ascii for '0'
*/
int	ft_atoi(const char *str)
{
	int	notation;
	int	total;
	int	i;

	i = 0;
	notation = 1;
	total = 0;
	while ((str[i] == 32) || ((str[i] > 8) && (str[i] < 14)))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if ((str[i + 1] == '-' ) || ((str[i + 1] == '+')))
			return (0);
		if (str[i] == '-')
			notation = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		total = (total * 10) + str[i] - '0';
		i++;
	}
	return (total * notation);
}
