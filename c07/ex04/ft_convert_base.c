/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:07:38 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 18:03:09 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_whitespace(char c);
int	is_valid(char *base, int *len);
int	ft_strlen(long long nbr, int base_len);

long	nbr_to_base(char *str, char *base, int len)
{
	long	ans;
	int		sign;
	int		idx;

	ans = 0;
	sign = 1;
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		idx = -1;
		while (++idx < len)
		{
			if (*str == base[idx])
				break ;
		}
		if (idx == len)
			break ;
		ans = ans * len + (sign * idx);
		++str;
	}
	return (ans);
}

char	*base_to_base(long nbr, char *base, int len)
{
	long	tmp;
	char	*ans;
	int		size;

	if (nbr == 0)
	{
		ans = (char *)malloc(2);
		ans[0] = base[0];
		ans[1] = 0;
		return (ans);
	}
	tmp = nbr;
	size = ft_strlen(tmp, len);
	ans = (char *)malloc(size + 1);
	ans[size] = 0;
	if (tmp < 0)
		tmp *= -1;
	while (tmp)
	{
		ans[--size] = base[tmp % len];
		tmp /= len;
	}
	if (nbr < 0)
		ans[0] = '-';
	return (ans);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	fr_len;
	int	to_len;

	if (!is_valid(base_from, &fr_len) || !(is_valid(base_to, &to_len)))
		return (0);
	return (base_to_base(nbr_to_base(nbr, base_from, fr_len), base_to, to_len));
}
