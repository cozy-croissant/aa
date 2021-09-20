/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:19:52 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/20 16:59:14 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;

	}
	while (src[j])
		j++;
	if (i >= size)
	{
		return (i + j);
	}
	if (i < size)
	{
		write(1, dest, i);
		return (size + j);
	}
}
