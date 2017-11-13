/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:00 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:32:58 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*realstrnstr(const char *big, const char *little, size_t len)
{
	if (!*big || !*len)
		return (NULL);
	else if (!*little)
		return (big - ft_strlen(little));
	else if (*big == *little)
		return (*realstrnstr(++big, ++little, --len));
	else
		return (*realstrnstr(++big, little, --len));
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!*little || len < ft_strlen(little))
		return (NULL);
	else
		return (ft_strstr(big, little));
}
