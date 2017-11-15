/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:59:41 by edchung           #+#    #+#             */
/*   Updated: 2017/11/13 23:18:44 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		putdigit(int n, int fd)
{
	if (n > -10 && n < 0)
		ft_putchar_fd((-1) * n + 48, fd);
	else if (n >= 0 && n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		putdigit(n / 10, fd);
		if (n < 0)
			ft_putchar_fd(((n % 10) * (-1)) + 48, fd);
		else
			ft_putchar_fd((n % 10) + 48, fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	putdigit(n, fd);
}
