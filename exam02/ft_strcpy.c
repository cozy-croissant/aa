/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:32 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/23 23:51:12 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *c1 = s1;
	char *c2 = s2;
	int	i = 0;
	while (c1[i] || c2[i])
	{
		c1[i] = c2[i];
		++i;
	}
	c1[i] ='\0'; //널문자 꼭 넣어주자!
	return (c1);
}

int main ()
{
	char *s1 = "Wasdjl";
	char *s2 = "asdkjljf";

	write(1, ft_strcpy(s1, s2), 10);
}
// 이거 만약에 치이면 어쩌지...
