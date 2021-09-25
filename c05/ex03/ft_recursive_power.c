/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:25:30 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/25 19:31:57 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	n = nb * ft_recursive_power(nb, power - 1);
	return (n);
}
