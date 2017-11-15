/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 00:31:59 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (1);
	else if (*s1 != *s2)
		return (0);
	else if (!*s1)
		return (1);
	else
		return (ft_strnequ(++s1, ++s2, --n));
}
