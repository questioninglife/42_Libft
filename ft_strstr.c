/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 20:30:18 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function *ft_strstr locates the first occurence of
** null-terminated string little in null-terminated string big.
*/

char	*ft_strstr(const char *big, const char *little)
{
	const char		*b;
	const char		*l;
	const char		*bl;

	if (!*little)
		return ((char *)big);
	b = big;
	while (*b)
	{
		bl = b;
		l = little;
		while (*bl && (*bl == *l))
		{
			if (!(*(++l)))
				return ((char *)b);
			++bl;
		}
		++b;
	}
	return (NULL);
}
