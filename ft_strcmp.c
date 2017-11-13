/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 21:38:57 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:23:22 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if not the same, return difference
** recursively compare next if equal and not end of string
** return 0 if both are at the end of string
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	else if (!s1)
		return (0);
	else
		return (ft_strcmp(++s1, ++s2));
}
