/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:59:29 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 12:58:40 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == 0)
		return (0);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
