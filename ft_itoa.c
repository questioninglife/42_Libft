/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/28 01:11:51 by edchung          ###   ########.fr       */
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
	char		*s;
	size_t		l;
	size_t		bar;

	l = ft_intlen(n);
	if (!(s = (char *)ft_memalloc(sizeof(char) * (l + 1))))
		return (NULL);
	bar = (n < 0 ? 1 : 0);
	if (n < 0)
		s[0] = '-';
	s[l] = '\0';
	while (l-- > bar)
	{
		s[l] = (n < 0 ? (n % 10) * -1 : n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
