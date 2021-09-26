/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 01:51:14 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/27 00:58:09 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *coa, char *str)
{
	while (*str)
		*(coa++) = *(str++);
	return (coa);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*coa;
	char	*tmp;
	long	len;
	int		i;

	if (size == 0)
	{
		coa = malloc(1);
		coa[0] = 0;
		return (coa);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	coa = malloc(len + ft_strlen(sep) * (size - 1) + 1);
	i = 1;
	tmp = ft_strcat(coa, strs[0]);
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (coa);
}
