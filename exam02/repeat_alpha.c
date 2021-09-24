/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:44:59 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 23:06:38 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char	*str = av[1];
		while (*str)
		{
			if ('a' <= *str && *str <= 'z')
				ft_put(*str, *str + 1 - 'a');
			else if ('A' <= *str && *str <= 'Z')
				ft_put(*str, *str + 1 - 'A');
			else
				write(1, str, 1);
			++str;
		}
	}
	write(1, "\n", 1);
	return (0);
}
