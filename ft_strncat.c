/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:18 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:26:29 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strncat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1, then add a terminating '\0'.
** The ft_strncat() function appends not more than n characters from s2.
** The ft_strncat() function returns the pointer s1.
*/

char	*strncat(char *s1, const char *s2, size_t n)
{
	char	*s;

	s = s1;
	while (*s1)
		++s1;
	while (*s2 && n--)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s);
}
