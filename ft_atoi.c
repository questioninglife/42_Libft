/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:52:27 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:04:19 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The atoi() function converts the initial portion of the string pointed to
** by str to int representation.
*/

static int		negcheck(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

/*
** initialize result to 1
** check for '+' or '-' sign
** '+' sets result to 1, '-' sets result to -1
** skip all white spaces in the beginning
** if digit, convert character to integer
** ft_isdigit will return int ASCII value of digit if true, 0 if false.
** Repeat for consecutive digits
** If not digit, return result
*/

int				ft_atoi(char *str)
{
	int result;

	result = 1;
	while (ft_isspace(str))
		++str;
	if (*str == '-' || *str == '+')
		result = negcheck(str++);
	result = result * ft_isdigit(str) - '0';
	while (ft_isdigit(++str))
		result = result * 10 + ft_isdigit(str) - '0';
	return (result);
}
