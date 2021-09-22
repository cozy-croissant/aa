/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:48:36 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/22 21:52:20 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	nega;
	int	len;

	i = 0;
	n = 0;
	nega = 1;
	len = ft_len_check(base);
	if (ft_len_check(base) == 1)
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nega *= -1;
		i++;
	}
	while (s)
	{
		i
		n = n * len + 
		i++;
	}
	return (n * nega);
}
