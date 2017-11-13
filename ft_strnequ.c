/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:47 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:30:28 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	else if (*s1 != *s2)
		return (0);
	else if (!*s1)
		return (ft_strnequ(++s1, ++s2, --n));
}
