/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:51:03 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/21 03:26:04 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if (n >= 0)
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}

void	ft_chgnbr(int n)
{
	if (n >= 10)
	{
		ft_chgnbr(n / 10);
		ft_chgnbr(n % 10);
	}
	if (n < 10)
		ft_putchar(n);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		ft_chgnbr(nb);
	}
	else
		ft_chgnbr(nb);
}
