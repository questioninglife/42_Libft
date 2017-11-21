/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/17 02:13:37 by edchung          ###   ########.fr       */
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
	const char		*start;
	const char		*end;
	char			*t;
	char			*tt;

	if (!s)
		return (NULL);
	start = s;
	while (*start && (*start == ' ' || *start == '\n' || *start == '\t'))
		++start;
	end = start;
	while (*end)
		++end;
	while ((start < end - 1) && (*(end - 1) == ' ' || *(end - 1) == '\n'
				|| *(end - 1) == '\t'))
		--end;
	if (!(t = (char *)ft_memalloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	tt = t;
	while (start < end)
		*tt++ = *start++;
	*tt = '\0';
	return (t);
}
