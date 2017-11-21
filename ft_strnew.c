/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:54 by edchung           #+#    #+#             */
/*   Updated: 2017/11/17 03:08:02 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnew() function allocates with malloc() and returns a "fresh"
** string ending with '\0'.
** Each character of the string is initialized at '\0'.
** If the allocation fails, the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char		*new;
	char		*n;

	if (!(new = (char *)malloc(sizeof(char) * (++size))))
		return (NULL);
	n = new;
	while (size--)
		*n++ = '\0';
	return (new);
}
