/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 20:58:33 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_itoa() function allocates with malloc(3) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported.
** If the allocation fails, the function returns NULL.
*/

static void		int_str(int n, char *s)
{
	if (n <= -10 || n >= 10)
	{
		int_str(n / 10, s);
		int_str(n % 10, s);
	}
	else
		*s++ = (n < 0 ? -n : n) + '0';
}

char			*ft_itoa(int n)
{
	size_t		l;
	char		*i_start;
	char		*i;

	l = ft_intlen(n);
	if (!(i_start = (char *)ft_memalloc(sizeof(char) * (l + 1))))
		return (NULL);
	i = i_start;
	if (n < 0)
		*i++ = '-';
	int_str(n, i);
	*i = '\0';
	return (i_start);
}
