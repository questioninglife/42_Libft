/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 19:24:25 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memccpy() function copies bytes from string src to string dst.
** If the character c (unsigned char) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in dst
** is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		if ((*d++ = *s++) == (unsigned char)c)
			return (d);
	return (NULL);
}
