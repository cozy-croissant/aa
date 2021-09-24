/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:35:50 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 22:12:29 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str)
		{
			if ('a' <= *str && *str <= 'm' || 'A' <= *str && *str <= 'M')
				*str += 13;
			else if ('n' <= *str && *str <= 'z' || 'N' <= *str && *str <= 'Z')
				*str -= 13;
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
