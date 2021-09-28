/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 01:22:38 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 13:17:11 by hoekim           ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src, char *str)
{
	while (src < str)
		*(dest)++ = *(src)++;
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*tmp;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * ft_strlen(str, charset) + 1);
	while (*str)
	{
		if (!ck_charset(*str, charset))
		{
			tmp = str;
			str++;
			while (!ck_charset(*str, charset) && *str)
				++str;
			strs[i] = malloc(str - tmp + 1);
			ft_strcpy(strs[i++], tmp, str);
		}
		str++;
	}
	strs[i] = 0;
	return (strs);
}
