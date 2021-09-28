/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 01:05:00 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/28 10:53:32 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == 0)
		return (-1);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
