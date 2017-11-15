/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/15 00:32:08 by edchung          ###   ########.fr       */
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
	size_t			i;

	if (!*little)
		return ((char *)big);
	b = big;
	while (*b++)
	{
		i = 0;
		while (b[i] == little[i])
			if (!little[1 + i++])
				return ((char *)--b);
	}
	return (NULL);
}
