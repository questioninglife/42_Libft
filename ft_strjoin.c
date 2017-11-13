/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:31 by edchung           #+#    #+#             */
/*   Updated: 2017/11/06 20:02:50 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*c;
	size_t		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(c = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s1)
		*c++ = *s1++;
	while (*s2)
		*c++ = *s2++;
	*c = '\0';
	return (c - len);
}
