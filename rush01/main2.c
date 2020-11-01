/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:46:58 by mde-deus          #+#    #+#             */
/*   Updated: 2020/11/01 10:40:35 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	*input_validation(char *str)
{
	int *colup;
	int i;
	int j;
	int n;
	
	n = 1;
	colup = (int*) malloc(n * sizeof(int));
	i = 0;
	j = 0;
	while (i < 7)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			colup[n] = str[i] - 48;
			printf("element number %d, is value %d\n", i, colup[n]);
			//write(1, tmp, 1);
			i = i + 2;
			n++;			
		}
		else
		{
			write(1, "error\n", 6);
			break;
		}
	}
			
	return (colup);
}

int main(int argc, char *argv[])
{
	
	if (argc != 2 || !(input_validation(argv[1])))
	{
		write(1, "ERROR\n", 6);	
		return 1;
	}

	return 0;
	
}
