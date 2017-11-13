/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:18 by edchung           #+#    #+#             */
/*   Updated: 2017/11/09 22:12:16 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstmap() function iterates a list lst and applies the function f to
** each link to create a "fresh" list, using malloc(3), resulting from the
** successive applications of f.
** If the allocation fails, the function returns NULL.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*t;

	if (f && *lst)
	{
		t = lst;
		while (lst)
		{
			lst = f(lst);
			lst = lst->next;
		}
		return (t);
	}
	else
		return (0);
}
