/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:28:19 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:54:49 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_bzero() funciton writes n zeroed bytes to the string s.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
