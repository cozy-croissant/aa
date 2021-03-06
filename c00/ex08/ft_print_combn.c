/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 05:06:29 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/17 05:13:13 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combn(char *buf, int n, int i)
{
	if (i == 0)
		buf[i] = '0';
	else
		buf[i] = buf[i - 1] + 1;
	while (buf[i] <= 10 - n + i + '0')
	{
		if (i == n - 1)
		{
			write(1, buf, n);
			if (!(buf[0] == 10 - n + '0'))
				write(1, ", ", 2);
		}
		else
			combn(buf, n, i + 1);
		buf[i]++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[9];

	combn(buf, n, 0);
}
