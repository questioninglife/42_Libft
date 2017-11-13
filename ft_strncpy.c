/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 17:16:01 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:30:00 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncpy(char *dst, const char *src, size_t len);
{
	char *d;

	d = dst;
	while (*src && len--)
		*d++ = *src++;
	while (len--)
		*d++ = '\0';
	return (dst);
}
