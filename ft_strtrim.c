/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/15 01:34:22 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strtrim() function allocates with malloc() and returns a copy of
** the string s without whitespaces in the beginiing or in the end.
** White spaces: ' ', '\n', and '\t'.
** If s has no white spaces in the beginning or the end, return copy of s.
** If allocation fails, return NULL.
*/

char	*ft_strtrim(const char *s)
{
	const char		*ss;
	char			*t;
	char			*tt;
	size_t			l;

	if (!s)
		return (NULL);
	l = ft_strlen(s) - 1;
	while (l && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		--l;
	ss = s;
	while (l-- && (*ss == ' ' || *ss == '\n' || *ss == '\t'))
		++ss;
	if (!(t = (char *)ft_memalloc(sizeof(char) * (l + 1))))
		return (NULL);
	tt = t;
	while (l--)
		*tt++ = *ss++;
	*tt = '\0';
	return (t);
}
