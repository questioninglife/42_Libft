/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:38 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 20:23:11 by edchung          ###   ########.fr       */
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
	char			*d;
	const char		*s;
	size_t			dl;
	size_t			sl;

	d = dst;
	s = src;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (size <= dl + 1)
		return (sl + size);
	else
	{
		while (*d && size--)
			++d;
		while (--size)
			*d++ = *s++;
		*d = '\0';
	}
	return (dl + sl);
}
