/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:06 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 20:27:46 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	const char		*s;
	char			*new;
	char			*n;

	s = str;
	if (!s || !f)
		return (NULL);
	if (!(new = (char *)ft_memalloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	n = new;
	while (*s)
	{
		*n++ = f(s - str, *s);
		++s;
	}
	*n = '\0';
	return (new);
}
