/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/06 19:58:21 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memcpy() function copies bytes from string src to string dst.
** If the character c (unsigned char) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in dst
** is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)dst;
	while (n--)
	{
		*dst = *((unsigned char *)src++);
		if (*dst == (unsigned char)c)
			return (++dst);
	}
	return (NULL);
}
