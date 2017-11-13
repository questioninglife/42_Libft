/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 18:38:50 by edchung          ###   ########.fr       */
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

char	*ft_strtrim(char const *s)
{
	char		*t;
	size_t		l;

	i = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		++s;
	l = ft_strlen(s) - 1;
	while (l > 0 && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		--l;
	if (!(t) = (char *)ft_memalloc(sizeof(char) * (i + 1)))
		return (NULL);
	t[l] = '\0';
	while (--l >= 0)
		t[l] = s[l];
	return (t);
}
