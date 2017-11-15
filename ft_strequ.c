/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:24:03 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 00:31:49 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (!*s1)
		return (1);
	else
		return (ft_strequ(++s1, ++s2));
}
