/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:03:35 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 17:23:52 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ispunct() function test for any printing character, except for space
** or a character for which isalnum(3) is true.
*/

int		ft_ispunct(int c)
{
	return (ft_isprint(c) && !(ft_isalnum(c)) && c != ' ') ? c : 0;
}
