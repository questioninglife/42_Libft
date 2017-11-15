/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:33:49 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 22:35:12 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strcpy() function copy the string src to dst (including '\0')
** The ft_strcpy() function returns dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dst);
}
