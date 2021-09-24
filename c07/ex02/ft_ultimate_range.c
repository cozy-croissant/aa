/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 01:05:00 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/25 01:49:37 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
