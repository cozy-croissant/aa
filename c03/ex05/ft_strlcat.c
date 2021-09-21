/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:19:52 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/21 00:08:08 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	if (i > size)
		i = size;
	while (i + 1 < size && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}
