/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:37:37 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/26 09:56:29 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int n, char queen[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (queen[i] == queen[n] || n - i == queen[n] - queen[i]
				|| n - i == queen[i] - queen[n])
			return (0);
		i++;
	}
	return (1);
}

int	rec_queen(int n, char queen[])
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	if (n == 10)
	{
		while (i < 10)
			ft_putchar(queen[i++]);
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		while (i < 10)
		{
			queen[n] = i + '0';
			if (check(n, queen))
				cnt += rec_queen(n + 1, queen);
			i++;
		}
	}
	return (cnt);
}

int	ft_ten_queens_puzzle(void)
{
	int	cnt;
	char	queen[10];

	cnt = 0;
	cnt = rec_queen(0, queen);
	return (cnt);
}
