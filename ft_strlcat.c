/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:38 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:25:43 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlcat() function appends the NUL-terminated string src
** to the end of dst.  It will append at most size - strlen(dst) - 1 byte,
** NUL-terminating the result.
** The ft_strlcat() function return the total length of the string
** it tried to create, which is the initial length of dst plus
** the length of src.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d + 1)
		return (s + size);
	else if (size > d + 1)
	{
		while (*dst)
			++dst;
		while (--size)
			*dst++ = *src++;
		*dst = '\0';
		return (d + s);
	}
}
