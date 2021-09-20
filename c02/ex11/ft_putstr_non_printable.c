/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:53:26 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/20 21:04:14 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa_print(char c)
{
	int		div;
	int		mod;
	char	*hex;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hex[(unsigned int)div], 1);
	write(1, &hex[(unsigned int)mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			hexa_print(str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}
