/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:20 by edchung           #+#    #+#             */
/*   Updated: 2017/11/20 19:39:01 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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


static size_t		word_size(const char *s, char c)
{
	const char		*start;
	const char		*end;

	start = s;
	end = s;
	while (*end && *end != c)
		++end;
	return (end - start);
}

static char			**splitstr(const char *s, char c, char **r, size_t r_size)
{
	char			**r_start;
	size_t			w_size;

	r_start = r;
	while (--r_size)
	{
		while (*s == c)
			++s;
		w_size = word_size(s, c) + 1;
		if (!(**r = (char *)ft_memalloc(w_size)))
			return (NULL);
		while (--w_size)
			*(*r++) = *(s++);
		**r = '\0';
		++r;
	}
	*r = 0;
	return (r_start);
}

char				**ft_strsplit(const char *s, char c)
{
	char			**r;
	size_t			r_size;
	
	if (!s)
		return (0);
	r_size = word_count(s, c) + 1;
	if (!(r = (char **)ft_memalloc(sizeof(char *) * r_size)))
		return (NULL);
	if (!splitstr(s, c, &r, r_size))
		return (NULL);
	return (r);
}

/*
int					main(void)
{
	char		*s = "      split       this for   me  !       ";
	char		**r = ft_strsplit(s, ' ');

	while (*r)
		printf("%s\n", (*r)++);
	return (0);
}
*/
