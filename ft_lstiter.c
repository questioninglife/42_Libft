/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:11 by edchung           #+#    #+#             */
/*   Updated: 2017/11/09 22:24:26 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstiter() function iterates the list lst and applies function f
** to each link.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f)
	{
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
