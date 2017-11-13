/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 21:23:19 by edchung           #+#    #+#             */
/*   Updated: 2017/11/10 22:12:29 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strrev() function reverses a given string.
*/

void	ft_strrev(char *s)
{
	char *r;
	char t;

	r = s;
	while (*r)
		++r;
	while (s < --r)
	{
		t = *s;
		*s = *r;
		*r = t;
		++s;
	}
}
