/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:14 by edchung           #+#    #+#             */
/*   Updated: 2017/11/27 19:41:50 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_itoa() function allocates with malloc(3) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported.
** If the allocation fails, the function returns NULL.
*/

static void		itos(char **s, int n)
{
	if (n > -10 || n < 10)
		*(*s)++ = (n < 0 ? -n : n) + '0';
	else
	{
		itos(s, n / 10);
		*(*s)++ = (n < 0 ? (n % 10) * -1 : n % 10) + '0';
	}
}

char			*ft_itoa(int n)
{
	char		*s_start;
	char		*s;

	if (!(s_start = (char *)ft_memalloc(sizeof(char) * ((ft_intlen(n) + 1)))))
		return (NULL);
	s = s_start;
	if (n < 0)
		*s++ = '-';
	itos(&s, n);
	*s = '\0';
	return (s_start);
}
