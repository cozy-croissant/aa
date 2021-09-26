/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:38:35 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/26 16:21:12 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*(s1++) = *(s2++);
	s1 = 0;
}

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ins;

	ins = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ins == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		ins[i].size = ft_strlen(av[i]);
		ins[i].str = malloc(ins[i].size + 1);
		ins[i].copy = malloc(ins[i].size + 1);
		ft_strcpy(ins[i].str, av[i]);
		ft_strcpy(ins[i].copy, av[i]);
		i++;
	}
	ins[i].str = 0;
	return (ins);
}
