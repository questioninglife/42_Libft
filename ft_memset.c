/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:39:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:17:15 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memset() function writes len bytes of value c (unsigned char)
** to the string b.
** The ft_memset() function returns its first argument.
**
** set pointer p equal to pointer b
** while len is not 0, set *b to c, and repeat with len - 1 and
** b + 1.
** return pointer to p.
*/

void	*memset(void *b, int c, size_t len)
{
	void	*p;

	p = b;
	while (len--)
		*b++ = (unsigned char)c;
	return (p);
}
