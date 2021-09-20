/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:33:40 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/20 20:44:13 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_change(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{		
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	pass;

	i = 0;
	pass = 1;
	ft_change(str);
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (pass == 1)
				str[i] -= 32;
			pass = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			pass = 0;
		else
			pass = 1;
		i++;
	}
	return (str);
}
