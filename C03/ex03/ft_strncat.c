/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:26:03 by mde-deus          #+#    #+#             */
/*   Updated: 2020/10/31 14:07:31 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int n;
	
	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] <= src[nb]) 
  	{
		dest[i+n] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[50] = {"abcd"};
	char source[50] = {"xxxxefgh"};

	ft_strncat(dest, source, 15);
	printf("%s \n", dest);
	return (0);
}
