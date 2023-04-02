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

/*
** @brief checks if given value is alphanumeric (ascii table)
** @param c value of input character
** @return 1 if true, 0 if not
*/
int	ft_isalnum(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}
