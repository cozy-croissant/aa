/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:07:46 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/24 11:21:00 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int	i = 0;

	while(s1[i])
	{
		while (*s2 != s1[i] && *s2)
			s2++;
		if (*s2)
			return;
		++i;
		++s2;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
