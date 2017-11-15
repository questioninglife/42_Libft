/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:23:55 by edchung           #+#    #+#             */
/*   Updated: 2017/11/15 01:36:46 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdup() function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it.
** If insufficient memory is availalbe, NULL is returned.
*/

char	*ft_strdup(const char *s1)
{
	const char		*s;
	char			*c;
	char			*cc;
	size_t			l;

	s = s1;
	l = 0;
	while (*s++)
		++l;
	if (!(c = (char *)ft_memalloc(sizeof(char) * (l + 1))))
		return (NULL);
	cc = c;
	while (*s)
		*cc++ = *s++;
	*cc = '\0';
	return (c);
}
