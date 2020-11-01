/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:06:02 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/31 13:24:17 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
		}
	i++;
	}
	printf("the size is %d, and the diff is %d", n, j);
	return (j);
}

int main()
{
	char strng[] =  "5445gf";
	char strng1[] = "a";
	ft_strncmp(strng, strng1, 1);
	return 0;
}
