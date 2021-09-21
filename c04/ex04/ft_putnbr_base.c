/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:12:32 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/22 00:38:54 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '+' || base[i] == '-')
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

void	ft_base(long n, char *base)
{
	int	len;

	if (ft_len_check(base) > 1)
		len = ft_len_check(base);
	if (n >= len)
	{
		ft_base(n / len, base);
		ft_base(n % len, base);
	}
	if (n < len)
		write(1, &base[n], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (ft_len_check(base) == 1)
		return ;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		ft_base(n, base);
	}
	else
		ft_base(n, base);
}
