/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:03 by edchung           #+#    #+#             */
/*   Updated: 2017/11/29 07:24:17 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *str1, const char *str2)
{
	const char		*s1;
	const char		*s2;

	s1 = str1;
	s2 = str2;
	if (s1 && s2)
	{
		while (*s1 || *s2)
			if (*s1++ != *s2++)
				return (0);
	}
	return (1);
}
