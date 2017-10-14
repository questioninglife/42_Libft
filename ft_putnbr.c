/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 20:25:07 by edchung           #+#    #+#             */
/*   Updated: 2017/10/13 15:50:54 by edchung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	dbd(int n)
{
	if (n >= 10 || n < -10)
	{
		dbd(n / 10);
		if (n < 0)
			ft_putchar(((n % 10) * (-1)) + 48);
        else
			ft_putchar((n % 10) + 48);
	}
	else if (n < 0)
		ft_putchar((-1) * n + 48);
	else
		ft_putchar(n + 48);	
}

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	dbd(n);
}
