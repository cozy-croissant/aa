/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:17:49 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 15:52:19 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb > 0)
	{
		while (i <= nb)
			n *= i++;
		return (n);
	}
	if (nb == 0)
		return (1);
	return (0);
}
