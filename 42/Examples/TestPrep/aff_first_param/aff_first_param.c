/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:04:20 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/14 15:28:19 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc <= 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
