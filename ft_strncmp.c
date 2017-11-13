/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:23 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:31:01 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 != *s2 && n > 0)
		return (*s1 - *s2);
	else if (*s1 && *s1 == *s2)
		return (ft_strncmp(++s1, ++s2, --n));
	else
		return (0);
}
