/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:43:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/28 00:51:42 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_intlen() function counts the number of digits of integer n.
** If n is negative, '-' counts as a digit for string purposes.
*/

size_t		ft_intlen(int n)
{
	size_t	l;

	l = (n < 0 ? 2 : 1);
	while (n /= 10)
		++l;
	return (l);
}
