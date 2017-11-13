/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:51:07 by edchung           #+#    #+#             */
/*   Updated: 2017/11/11 17:56:26 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_iscntrl() function tests for any control character.
** The ft_iscntrl() function returns zero if the character tests false and
** returns 1 if the character tests true.
*/

int		ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127) ? 1 : 0;
}
