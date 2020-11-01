/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:22:38 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/30 09:39:50 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
    j = 0;
	while ((s1[i] && s2[i]) != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];	
		}

		i++;	
	}	
		printf("the diff is %d", j);
		return (j);
}
int main()
{
	char strng[]  = "4343433 ";
	char strng1[] = "miguela";
	ft_strcmp(strng, strng1);
	return 0;
}
