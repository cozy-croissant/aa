/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:54:47 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 15:44:49 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	n = nb * ft_recursive_factorial(nb - 1);
	return (n);
}
