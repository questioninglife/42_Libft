/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:52:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/18 17:44:10 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_atoi() function converts the initial portion of the string pointed to
** by str to int representation.
*/

/*
** Skip all white spaces in the beginning.
** If there is a '+' or '-' sign, increment pointer.
** While *s is a digit, set r = (r x 10) - (*s - '0') as the new one's digit.
** This calculation is done with negative numbers, in order to work with
** the min int value; If the result is not negative, return -r.
*/

int				ft_atoi(const char *str)
{
	const char		*s;
	int				r;
	char			neg;

	s = str;
	r = 0;
	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		++s;
	if (*s == '+' || (neg = *s == '-'))
		++s;
	while (*s >= '0' && *s <= '9')
		r = (r * 10) - (*s++ - '0');
	return (neg ? r : -r);
}
