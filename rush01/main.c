/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:46:58 by mde-deus          #+#    #+#             */
/*   Updated: 2020/11/01 11:55:05 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	*input_validation(char *str)
{
	int tabela[16];
	int i;
	int j;
	int n;

	//str=tabela;
	
	n = 1;
	//colup = (int*) malloc(n * sizeof(int));
	i = 0;
	j = 0;
	while (i < 31)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			tabela[j] = str[i] - 48;
			printf("element number %d, is value %d\n", i, tabela[j]);
			//write(1, tmp, 1);
			i = i + 2;
			j++;
		}
		else
		{
			write(1, "error\n", 6);
			break;
		}
	}
	printf("%d\n", tabela[10]);
	
			
	return (tabela);
}

int main(int argc, char *argv[])
{
	int	tabela[16];	
	int *aux;
	aux=tabela;
	if (argc != 2 || !(aux=input_validation(argv[1])))
	{
		write(1, "ERROR\n", 6);	
		return 1;
	}
	
	return 0;
	
}
