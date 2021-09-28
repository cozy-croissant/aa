/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:37:37 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 17:04:53 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int *board)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + board[i]);
		i++;
	}
	ft_putchar('\n');
}

int	check_num(int *board, int num, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (board[i] == num)
			return (0);
		if (board[i] + index - i == num)
			return (0);
		if (board[i] - index + i == num)
			return (0);
		i++;
	}
	return (1);
}

void	find_queens(int *board, int index, int *cnt)
{
	int	i;

	if (index == 10)
	{
		print_board(board);
		*cnt += 1;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		if (check_num(board, i, index))
		{
			board[index] = i;
			find_queens(board, index + 1, cnt);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	cnt;

	find_queens(board, 0, &cnt);
	return (cnt);
}
