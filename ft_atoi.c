/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:34:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/21 17:19:02 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
{
	//charstr[i][] = "-2147483648";

	printf(str[i] = %d\n", ft_atoi("-2147483648"));
	/str[i] = "StuffThatsDumb";
	//printf(str[i] = %d\n", atoistr[i]));
	return (0);
}*/