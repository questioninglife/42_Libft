/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 21:27:06 by edchung           #+#    #+#             */
/*   Updated: 2017/11/09 21:19:08 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdel() function takes as a parameter the address of a pointer to
** a link and frees the memory of this link and every successors of that link
** using the functions del() and free(3).
** The pointer to the link that was just freed must be set to NULL.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *t;

	t = *alst;
	if (alst && del)
	{
		while (*alst)
		{
			t = (*alst)->next;
			del(*alst->content, *alst->content_size);
			free(*alst);
			*alst = t;
		}
		*alst = NULL;
	}
}
