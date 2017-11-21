/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:25:23 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 20:36:50 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char		*ss1;
	const char		*ss2;

	ss1 = s1;
	ss2 = s2;
	while ((*ss1 || *ss2) && n--)
		if (*ss1++ != *ss2++)
			return (*(unsigned char *)--ss1 - *(unsigned char *)--ss2);
	return (0);
}
