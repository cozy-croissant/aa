/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:47:37 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/15 21:06:43 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	int	********nbr;
	int	*******nbr;
	int	******nbr;
	int *****nbr;
	int ****nbr;
	int	***nbr;
	int **nbr;
	int *nbr;

	*********nbr = ********nbr;
	********nbr = *******nbr;
	*******nbr = ******nbr;
	******nbr = *****nbr;
	*****nbr = ****nbr;
	****nbr = ***nbr;
	***nbr = **nbr;
	**nbr = *nbr;
	*nbr = 4;
}

int main(void)
{
	int *nbr;
	char c;

	ft_ultimate_ft(nbr);
	c = '0' + *nbr;
	write(1, &c, 1);
}
