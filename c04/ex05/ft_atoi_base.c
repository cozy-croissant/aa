/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:48:36 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/26 12:29:16 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
			return (j + 1);
		j++;
	}
	return (0);
}

int	ft_obase(char *str, char *base, int i, int len)
{
	int	j;
	int	n;

	n = 0;
	while (!((9 <= str[i] && str[i] <= 13) || str[i] == 32))
	{
		while (ft_base_check(str, base, i))
		{
			j = ft_base_check(str, base, i);
			if (j >= 0)
				n = n * len + (j - 1);
			i++;
		}
	}
	return (n);
}

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
			if (base[i] == 32)
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	nega;
	int	len;

	i = 0;
	nega = 1;
	len = ft_len_check(base);
	if (ft_len_check(base) == 1)
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nega *= -1;
		i++;
	}
	n = ft_obase(str, base, i, len);
	return (n * nega);
}
