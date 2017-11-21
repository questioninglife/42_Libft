/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 17:16:01 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 14:58:51 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	while (*s && len)
	{
		*d++ = *s++;
		--len;
	}
	while (len)
	{
		*d++ = '\0';
		--len;
	}
	return (dst);
}
