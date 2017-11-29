/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:57 by edchung           #+#    #+#             */
/*   Updated: 2017/11/29 02:13:00 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	const char		*s;
	char			*new;
	char			*n;

	if (!str || !f)
		return (NULL);
	s = str;
	if (!(new = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	n = new;
	while (*s)
		*n++ = f(*s++);
	*n = '\0';
	return (new);
}
