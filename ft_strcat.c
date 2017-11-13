/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 17:33:41 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:21:57 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strcat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1, then adds a terminating '\0'.
**
** While *s1 is not NULL, increment the pointer to s1.
** While *s2 is not NULL, set *s1 equal to *s2, and then increment
** the pointer to s1 and the pointer to s2.
** Return pointer to beginning of string s1,
** i.e., s1 minus the combined length of s1 and s2.
*/

char	*strcat(char *s1, const char *s2)
{
	char *p;

	p = s1;
	while (*s1)
		++s1;
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (p);
}
