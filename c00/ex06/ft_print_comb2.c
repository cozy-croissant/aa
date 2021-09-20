/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:26:48 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/18 15:57:11 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sea(char c[], char d[])
{
	while (d[0] <= '9')
	{
		d[1] = '0';
		if (c[0] == d[0])
			d[1] = c[1] + 1;
		while (d[1] <= '9')
		{
			write (1, c, 2);
			write (1, " ", 1);
			write (1, d, 2);
			if (c[0] == '9' && c[1] == '8')
				return ;
			write (1, ", ", 2);
			d[1]++;
		}
		d[0]++;
	}
}

void	ft_print_comb2(void)
{
	char	c[2];
	char	d[2];

	c[0] = '0';
	c[1] = '0';
	d[0] = '0';
	d[1] = '1';
	while (c[0] <= '9')
	{
		c[1] = '0';
		while (c[1] <= '9')
		{
			d[0] = '0';
			if (d[0] == '0')
				d[0] = c[0];
			sea(c,d);
			c[1]++;
		}
		c[0]++;
	}
