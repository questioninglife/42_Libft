/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:57 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 18:39:42 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*n;
	char	*new;

	if (!s || !f)
		return (NULL);
	if (!(new = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	n = new;
	while (*s)
		*new++ = f(*s++);
	*new = '\0';
	return (n);
}
