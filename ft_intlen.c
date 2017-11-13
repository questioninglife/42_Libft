/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:43:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:04:41 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_intlen() function counts the number of digits of integer n.
** If n is negative, '-' counts as a digit for string purposes.
*/

unsigned int		ft_intlen(int n)
{
	unsigned int i;

	i = 0;
	if (n < 0)
		++i;
	while (n /= 10)
		++i;
	return (i);
}
