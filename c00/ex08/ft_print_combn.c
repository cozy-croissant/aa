/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:08:50 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/15 20:20:22 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int *buf, int i)
{
	char	c;

	c = buf[i] + '0';
	write (1, &c, 1);
}


void	ft_print_combn(int n, int i, int j)
{
	int	i, j, buf[10];

	buf[i] = 0;
	i = 0;
	j = 0;
	while (0 < n && n < 10)
	{
		if (j > i)
		{
			while (i <= 10 - n)
			{
				i++;
				ft_print_combn (n - 1, i, j + 1);	
			}
		}
		else
		{
			ft_putchar (buf, i);
			i++;
		}
	}
}

int	main(void)
{
	ft_print_combn(4);
	return 0 ;
}
