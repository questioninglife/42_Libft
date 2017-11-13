/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/10 22:37:33 by edchung          ###   ########.fr       */
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
	unsigned int	l;
	char			*i;
	char			*ii;
	char			*iii;

	l = ft_intlen(n);
	if (!(i = ft_memalloc(l + 1)))
		return (NULL);
	ii = i;
	if (n == 0)
		*i++ = '0';
	else if (n < 0)
		*i++ = '-';
	iii = i;
	while (n)
	{
		*i++ = (n < 0 ? -n % 10 : n % 10) + '0';
		n = n / 10;
	}
	*i = '\0';
	ft_strrev(iii);
	return (ii);
}
