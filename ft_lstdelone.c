/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:26:58 by edchung           #+#    #+#             */
/*   Updated: 2017/11/09 21:19:28 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdelone() function takes a link's pointer address as a parameter
** and frees the memory of the link's content using the function del, given
** as a parameter, then frees the link's memory using free(3).
** The memory of next must not be freed under any circumstance.
** The pointer to the link that was just freed must be set to NULL.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
