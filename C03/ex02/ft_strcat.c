/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:47:15 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/31 13:57:29 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	n = 0;	
	i = 0;

		while (dest[n] != '\0')
		{
			n++;
						
		}


		while(dest[i] != '\0' )
		{
			dest[i+n] = src[i]; 
			i++;	
		}
		dest[i] = '\0';
		return (dest);	
}

int main()
{
	char s1[50] = {"abcd"};
	char s2[] = {"efghijklmn"};

	ft_strcat(s1, s2);
	printf("%s \n", s1);
	return (0);
}
