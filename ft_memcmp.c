/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:58 by edchung           #+#    #+#             */
/*   Updated: 2017/11/07 01:06:20 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** THe ft_memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
** The ft_memcmp() function returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes.
** Zero-length strings are always identical.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *x;
	unsigned char *y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (n--)
	{
		if (*x != *y)
			return (*x - *y);
		++x;
		++y;
	}
	return (0);
}
