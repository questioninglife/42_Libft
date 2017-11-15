/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:39:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 21:45:11 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memset() function writes len bytes of value c (unsigned char)
** to the string b.
** The ft_memset() function returns its first argument.
**
** set pointer bb equal to pointer b
** while len is not 0, set *b to c, and repeat with len - 1 and
** b + 1.
** return pointer bb.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	void	*bb;

	bb = b;
	while (len--)
		*(unsigned char *)bb++ = (unsigned char)c;
	return (b);
}
