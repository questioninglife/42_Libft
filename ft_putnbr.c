/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 22:51:48 by edchung           #+#    #+#             */
/*   Updated: 2017/11/12 23:19:35 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		putdigit(int n)
{
	if (n > -10 && n < 10)
		ft_putchar((n < 0 ? n * -1 : n) + '0');
	else
	{
		putdigit(n / 10);
		ft_putchar((n < 0 ? (n % 10) * -1 : n % 10) + '0');
	}
}

void			ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	putdigit(n);
}
