/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 18:30:39 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 17:24:07 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isprint() function tests for any printing character, including
** space (' ').
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126) ? c : 0;
}
