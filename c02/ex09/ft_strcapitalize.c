/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:33:40 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/19 13:47:20 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i - 1] && str[i - 1] <= 'z' 
			|| 'A' <= str[i - 1] && str[i - 1] <= 'Z'))
		{

		}
	}
}
