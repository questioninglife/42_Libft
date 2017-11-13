/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:33:49 by edchung           #+#    #+#             */
/*   Updated: 2017/11/07 01:21:04 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strcpy() function copy the string src to dst (including '\0')
** The ft_strcpy() function returns dst.
*/

char	*strcpy(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
