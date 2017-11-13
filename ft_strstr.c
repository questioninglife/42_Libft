/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:33:39 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Objective:
** Function *ft_strstr locates the first occurence of
** null-terminated string little in null-terminated string big.
**
**
** *realstrstr:
** Continue [Loop] while [Exit conditions] are not met.
**
** [Loop]:
** If pointer to big and pointer to little are the same characters,
** increment both by 1.
** Otherwise, increment pointer to big by 1.
**
** [Exit conditions]:
** 1. If end of big is reached, return NULL.
** 2. Otherwise, if the end of string little was reached,
**    return a pointer to the current character of big minus the length
**    of little.
**
**
** *ft_strstr:
** If string little is empty, then return pointer to string big.
** Otherwise, return values through *realstrstr.
*/

static char		*realstrstr(const char *big, const char *little)
{
	if (!*big)
		return (NULL);
	else if (!*little)
		return (big - ft_strlen(little));
	else if (*big == *little)
		return (realstrstr(++big, ++little));
	else
		return (realstrstr(++big, little));
}

char			*ft_strstr(const char *big, const char *little)
{
	if (!*little)
		return (big);
	else
		return (realstrstr(big, little));
}
