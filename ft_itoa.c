/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 23:54:15 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_itoa() function allocates with malloc(3) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported.
** If the allocation fails, the function returns NULL.
*/

char			*ft_itoa(int n)
{
	size_t			l;
	char			*i;
	char			*ii;
	char			*iii;

	l = ft_intlen(n);
	if (!(i = (char *)ft_memalloc(sizeof(char) * (l + 1))))
		return (NULL);
	ii = i;
	if (n == 0)
		*ii++ = '0';
	else if (n < 0)
		*ii++ = '-';
	iii = ii;
	while (n)
	{
		*ii++ = (n < 0 ? -n % 10 : n % 10) + '0';
		n = n / 10;
	}
	*ii = '\0';
	ft_strrev(iii);
	return (i);
}
