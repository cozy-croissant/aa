/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 01:05:00 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/27 19:20:22 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	arr = *range;
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (len);
}
