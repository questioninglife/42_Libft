/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:00 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 23:29:13 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char		*b;
	const char		*l;
	const char		*bl;
	size_t			ln;

	if (!*little)
		return ((char *)big);
	b = big;
	while (*b && len)
	{
		bl = b;
		l = little;
		ln = len;
		while (*bl && (*bl == *l) && ln--)
		{
			if (!(*(++l)))
				return ((char *)b);
			++bl;
		}
		++b;
		--len;
	}
	return (NULL);
}
