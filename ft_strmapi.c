/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:06 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 18:41:30 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*new;
	char	*n;
	char	*s;

	if (!s || !f)
		return (NULL);
	if (!(new = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	n = new;
	s = (char *)str;
	while (*str)
	{
		*new++ = f(str - s, *str);
		str++;
	}
	*new = '\0';
	return (n);
}
