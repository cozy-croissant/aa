/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:18:05 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 20:41:51 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb / 2;
	while (temp >= i)
	{
		temp -= i;
		i++;
	}
	if (nb == (i * i))
		return (i);
	return (0);
}
