/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:48:16 by edchung           #+#    #+#             */
/*   Updated: 2017/11/28 01:14:09 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** The ft_strplit() function allocates with malloc(3) and returns an array of
** "fresh" strings by splitting s, using the character c as a delimiter,
** all ending with '\0', including the array itself.
*/

static size_t		word_count(const char *s, char c)
{
	const char		*ss;
	const char		*n;

	ss = s;
	n = s;
	while (*ss++)
		if (*(ss - 1) != c && (*ss == c || *ss == '\0'))
			++n;
	return (n - s);
}

char				**ft_strsplit(const char *s, char c)
{
	const char		*ss;
	const char		*s0;
	char			**r;
	char			**r0;

	if (!s)
		return (NULL);
	ss = s;
	if (!(r = (char **)ft_memalloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	r0 = r;
	s0 = s;
	while (*ss++)
	{
		if (*ss == c || *ss == '\0')
		{
			if (*(ss - 1) != c)
				*r++ = ft_strsub(s0, 0, ss - s0);
			if (*ss == c)
				s0 = ss + 1;
		}
	}
	*r = 0;
	return (r0);
}
