/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:33 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:34:21 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strsub() function allocates with malloc() and returns a fresh
** substring from the string given as argument.
** The substring begins at index start and is of size len.
** If start and len aren't referring to a valid substring, the behavior is
** undefined.  If the allocation fails, return NULL.
*/

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*s;
	char	*sub;
	char	*ssub;

	if (!str || !(sub = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	ssub = sub;
	s = str;
	s += start;
	while (len--)
		*ssub++ = *s++;
	*ssub = '\0';
	return (sub);
}
