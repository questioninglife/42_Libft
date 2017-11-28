/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/28 01:07:13 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** The ft_itoa() function allocates with malloc(3) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported.
** If the allocation fails, the function returns NULL.
*/

/*
static void		itos(char *s, int n)
{
	if (n > -10 || n < 10)
		*s++ = (n < 0 ? -n : n) + '0';
	else
	{
		itos(s, n / 10);
		*s++ = (n < 0 ? (n % 10) * -1 : n % 10) + '0';
	}
}
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

int				main(void)
{
	char		*i1 = ft_itoa(-623);
	char		*i2 = ft_itoa(156);
	char		*i3 = ft_itoa(0);

	printf("-623 %s\n 156 %s\n 0 %s\n", i1, i2, i3);
	return (0);
}
