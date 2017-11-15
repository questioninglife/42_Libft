/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:20 by edchung           #+#    #+#             */
/*   Updated: 2017/11/13 23:43:37 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strplit() function allocates with malloc(3) and returns an array of
** "fresh" strings by splitting s, using the character c as a delimiter,
** all ending with '\0', including the array itself.
*/

static size_t		word_count(const char *s, char c)
{
	const char	*ss;
	const char	*i;

	ss = s;
	i = s;
	while (*ss)
	{
		if (*ss != c && (*(ss + 1) == c || *(ss + 1) == '\0'))
			++i;
		++ss;
	}
	return (i - s);
}

static size_t		word_size(const char *s, char c)
{
	const char *w;
	const char *i;

	w = s;
	while (*w == c)
		++w;
	i = w;
	while (*w && *w != c)
		++i;
	return (i - w);
}

char				**ft_strsplit(const char *s, char c)
{
	char		**r;
	char		**rr;
	size_t		rsize;
	size_t		wsize;

	if (!s || !c)
		return (0);
	rsize = word_count(s, c) + 1;
	if (!(r = (char **)ft_memalloc((sizeof(char *) * rsize))))
		return (NULL);
	rr = r;
	while (--rsize)
	{
		wsize = word_size(s, c);
		if (!(*rr = (char *)ft_memalloc(sizeof(char *) * wsize)))
			return (NULL);
		while (wsize--)
			*(*rr)++ = *s++;
		**rr = '\0';
		++rr;
	}
	*rr = 0;
	return (r);
}
