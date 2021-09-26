/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:24:10 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/26 17:48:19 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int size)
{
	char	c;

	if (size == 0)
		return ;
	if (size >= 10)
	{
		ft_putnbr(size / 10);
		ft_putnbr(size % 10);
	}
	if (size < 10)
	{
		c = size + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (par[i].size)
			ft_putnbr(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		++i;
	}
}
