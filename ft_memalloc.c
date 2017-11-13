/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:34 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:07:40 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memalloc() function allocates with malloc() and initialized to 0.
** If the allocation fails, return NULL.
**
** Set void pointer to p.
** Set pointer p to to allocated size bytes of memory.
** If p is pointing to null, return NULL.
** Run function ft_bzero() with pointer p and size as the parameters.
** Return pointer p.
*/

void	*ft_memalloc(size_t size)
{
	void	*p;

	p = (void *)malloc(size);
	if (!p)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
