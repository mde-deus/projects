/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-deus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:07:58 by mde-deus          #+#    #+#             */
/*   Updated: 2020/11/05 14:29:33 by mde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_putstr(argv[argc]);
		ft_putstr("\n");
	}
	return (0);
}
