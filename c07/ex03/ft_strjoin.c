/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 01:51:14 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/25 02:05:52 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_strlen(char *str)
{
	long	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char	*ft_strcat(char *ans, char *str)
{
	while (*str)
		*(ans++) = *(str++);
	return (ans);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	char	*tmp;
	long	len;
	int		i;

	if (size == 0)
	{
		ans = (char*)malloc(1);
		ans[0] = 0;
		return (ans);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	ans = (char*)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	i = 1;
	tmp = ft_strcat(ans, strs[0]);
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ans);
}
