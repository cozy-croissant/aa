/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:16:04 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/27 09:52:32 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

int	ft_base(char *base, int *len)
{
	int		ck[256];
	int		i;
	char	c;

	i = 0;
	while (i < 256)
		ck[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (ck[(int)c] || c == '+' || c == '-'
			|| c == 32 || (9 <= c && c <= 13))
			return (0);
		ck[(int)c] = 1;
		++(*len);
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int	ft_strlen(long long nbr, int base_len)
{
	int		ans;

	if (!nbr)
		return (1);
	ans = 0;
	if (nbr < 0)
		++ans;
	while (nbr)
	{
		nbr /= base_len;
		++ans;
	}
	return (ans);
}
