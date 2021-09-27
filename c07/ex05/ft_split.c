/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:22:38 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/27 09:53:07 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ck_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	ft_strlen(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!ck_charset(*str, charset))
		{
			str++;
			cnt++;
			while (*str && !ck_charset(*str, charset))
				str++;
			str--;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *src, char *fin)
{
	while (src < fin)
		*(dest)++ = *(src)++;
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**ans;
	char	*tmp;
	int		i;

	i = 0;
	ans = malloc(sizeof(char *) * ft_strlen(str, charset) + 1);
	while (*str)
	{
		if (!ck_charset(*str, charset))
		{
			tmp = str;
			str++;
			while (!ck_charset(*str, charset) && *str)
				++str;
			ans[i] = malloc(str - tmp + 1);
			ft_strcpy(ans[i++], tmp, str);
		}
		str++;
	}
	ans[i] = 0;
	return (ans);
}
