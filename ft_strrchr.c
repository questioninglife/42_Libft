/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:11 by edchung           #+#    #+#             */
/*   Updated: 2017/11/13 23:41:59 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strrchr() function locates the last occurence of c,
** in the string pointed to by s
** The ft_strrchr() function returns a pointer to the located character,
** or NULL if the character does not appear in the string.
**
** While *s is not '\0', if *s is not equal to c, increment the pointer.
** Otherwise if *s is equal to c, set last to s.
** Once the end of string s is reached, if c is '\0', return s,
** otherwise return last.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char *last;

	last = NULL;
	while (*s)
	{
		if (*s != c)
			++s;
		else
			last = s++;
	}
	return (c == '\0') ? (char *)s : (char *)last;
}
