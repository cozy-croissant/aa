/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:24:51 by wolee             #+#    #+#             */
/*   Updated: 2021/09/11 18:05:19 by wolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char	c);

void	ft_if(int i, int j, int x, int y)
{
	if (i == 0)
	{
		if (j == 0 || j == (x - 1))
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (i == (y - 1))
	{
		if (j == 0 || j == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	ft_loop(int i, int j, int x, int y)
{
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_if(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	ft_loop(i, j, x, y);
}
