/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:51:57 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/30 12:58:36 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap_strings(char *a, char *b)
{
	char t[100];
	int i;
	
	i = 0;
	while ( (a[i] && b[i] )!= '\0' ) 
	{
	t[i] = a[i];
	a[i] = b[i];
	b[i] = t[i];
	i++;
	}
}
int main()
{
	char i[] = {"TTTTT"};
	char j[] = {"abcde"};

	ft_swap_strings(i, j);
	printf("o valor de i: %s\no valor de j: %s \n", i, j);
	return 0;
}
