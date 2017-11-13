/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:08:17 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 18:41:46 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlen() function computes the length of the string s.
** The ft_strlen() function returns the number of characters that precede
** the terminating NUL character.
**
** While *s is not '\0', increment count.
** Return the count, i.e, the length of the string, excluding '\0'.
*/

size_t	ft_strlen(const char *s)
{
	const char *i;

	i = s;
	while (*i)
		++i;
	return (i - s);
}
