/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:28:10 by edchung           #+#    #+#             */
/*   Updated: 2017/11/06 19:58:55 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memdel() function takes the address of a memory area that needs
** to be freed with free(), then puts the pointer to NULL.
*/

void	*ft_memdel(void **ap)
{
	if (*ap)
		free(*ap);
	*ap = NULL;
}
