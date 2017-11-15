/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:28:04 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 19:33:49 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memcpy() function copies n bytes from memory area src to dst.
** If dst and src overlap, behavior is undefined.
** The ft_memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
