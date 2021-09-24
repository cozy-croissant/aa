/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:24:29 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/25 01:43:23 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*cpy;
	long long	i;
	long long	j;

	i = 0;
	j = 0;
	while (src[i])
		++i;
	cpy = malloc(i + 1);
	while (src[j])
	{
		cpy[j] = src[j];
		++j;
	}
	cpy[j] = '\0';
	return (cpy);
}
