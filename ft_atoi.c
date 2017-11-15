/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:52:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/14 20:20:11 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The atoi() function converts the initial portion of the string pointed to
** by str to int representation.
*/

/*
** Initialize result to 1
** Skip all white spaces in the beginning.
** Check for '+' or '-' sign and set r to 1 or -1, respectively.
** When assigning r to r * ft_isdigit(*s), if ft_isdigit
** ft_isdigit will return int ASCII value of digit if true, 0 if false.
** Repeat for consecutive digits
** Return r
*/

int				ft_atoi(const char *str)
{
	const char		*s;
	int				r;

	s = str;
	r = 1;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	else if (*s == '-')
	{
		++s;
		r = -1;
	}
	if (!(r = r * (ft_isdigit(*s) - '0')))
		return (0);
	while (ft_isdigit(*++s))
		r = r * 10 + ft_isdigit(*s) - '0';
	return (r);
}
