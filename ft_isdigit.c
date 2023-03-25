/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:31:43 by jschwabe          #+#    #+#             */
/*   Updated: 2023/03/17 18:31:43 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = '0';
	printf("Is c numeric?: %d\n", ft_isdigit(c));
	printf("Is c numeric (orgf)?: %d\n", isdigit(c));
	c = '}';
	printf("Is c numeric?: %d\n", ft_isdigit(c));
	printf("Is c numeric (orgf)?: %d\n", isdigit(c));
	return (0);
}*/
