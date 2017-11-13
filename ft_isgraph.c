/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:27:10 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 17:32:55 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isgraph() function tests for any printing character except
** space (' ') and other locale-specific space-like characters.
*/

int		ft_isgraph(int c)
{
	return (c >= 33 && c < 126) ? c : 0;
}
