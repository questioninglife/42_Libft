/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:31 by edchung           #+#    #+#             */
/*   Updated: 2017/11/29 01:55:01 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*s;
	size_t		len;

	len = (s1 ? ft_strlen(s1) : 0) + (s2 ? ft_strlen(s2) : 0);
	if (!(s = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (s1)
		while (*s1)
			*s++ = *s1++;
	if (s2)
		while (*s2)
			*s++ = *s2++;
	*s = '\0';
	return (s - len);
}
