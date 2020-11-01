/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:21:50 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/30 16:45:06 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_rot_13(char *str)
{	
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 77)
		{
			str[i] = str[i] + 13;
		}
		else if(str[i] >= 78 && str[i] <= 90)
		{	
			str[i] = str[i] - 13;
		}
		else if(str[i] >= 97 && str[i] <= 109)
		{ 
		  	str[i] = str[i] + 13;
		}
		else if(str[i] >= 111 && str[i] <= 122)
		{
			str[i] = str[i] - 13;
		}
		i++;
	}
	write(1, str, i);
	return (*str);
}

int main(int argc, char **argcv)
{
	if (argc == 2)
	ft_rot_13(argcv[1]);
	write(1, "\n", 1);
}
