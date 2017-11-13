/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:48 by edchung           #+#    #+#             */
/*   Updated: 2017/11/07 01:05:42 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memchr() function locates the first occurence of c (unsigned char)
** in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		++p;
	}
	return (NULL);
}
