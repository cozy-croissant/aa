/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:16:04 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 18:04:27 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int	is_valid(char *base, int *len)
{
	int		chk[256];
	int		i;
	char	c;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (chk[(int)c] || c == '+' || c == '-'
			|| c == ' ' || ('\t' <= c && c <= '\r'))
			return (0);
		chk[(int)c] = 1;
		++(*len);
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int	ft_strlen(long long nbr, int base_len)
{
	int	ans;

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
