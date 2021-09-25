/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:37:37 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/25 10:41:34 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rec_queen(int n, char queen[])
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
}

int	ft_ten_queens_puzzle(void)
{
	int		cnt;
	char	queen[10];

	cnt = 0;
	cnt = rec_queen(0, queen);
	return (cnt);
}
