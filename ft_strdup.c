/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:23:55 by edchung           #+#    #+#             */
/*   Updated: 2017/11/07 01:21:46 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdup() function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it.
** If insufficient memory is availalbe, NULL is returned.
*/

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	i;

	i = 0;
	while (*s1++)
		++i;
	if (!(cpy = (char *)ft_memalloc(sizeof(*cpy) * (i + 1))))
		return (NULL);
	while (i--)
		*cpy++ = *s1++;
	*cpy = '\0';
	return (cpy);
}
