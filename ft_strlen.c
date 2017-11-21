/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:08:17 by edchung           #+#    #+#             */
/*   Updated: 2017/11/15 21:12:49 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlen() function computes the length of the string s.
** The ft_strlen() function returns the number of characters that precede
** the terminating NUL character.
**
** Let const char *ss = s.
** While *ss is not '\0', increment pointer ss.
** Return the ss - s, i.e, the length of the string, excluding '\0'.
*/

size_t	ft_strlen(const char *s)
{
	const char		*ss;

	ss = s;
	while (*ss)
		++ss;
	return (ss - s);
}
