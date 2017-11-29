/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:06 by edchung           #+#    #+#             */
/*   Updated: 2017/11/29 02:13:05 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	const char		*s;
	const char		*s0;
	char			*new;
	char			*n;

	if (!str || !f)
		return (NULL);
	s = str;
	s0 = s;
	if (!(new = (char *)ft_memalloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	n = new;
	while (
			*s)
	{
		*n++ = f(s - s0, *s);
		++s;
	}
	*n = '\0';
	return (new);
}
