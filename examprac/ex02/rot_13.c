/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:08:19 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/30 16:38:23 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


char	ft_rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
	
		if (str[i] >= 78 && str[i] <= 90) 
		{
			str[i] = str[i] - 13;
		}
		else if (str[i] >= 65 && str[i] <= 77)
		{	
			str[i] = str[i] + 13;
		}
		else if (str[i] >= 110 && str[i] <= 122)
		{
			str[i] = str[i] - 13;
		}
		else if (str[i] <= 109 && str[i] >= 97)
		{
			str[i] = str[i] + 13;
		}		
			i++;
	}
	write(1, str, i);	
	return(*str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);	
		write(1, "\n", 1);
}
