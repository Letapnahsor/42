/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 10:29:36 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/02 12:57:36 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int		rush(int x, int y)
{
	int column;
	int row;

	while(row < y)
	{
		if(column == 0 && (row == 0 || row == y - 1))
			ft_putchar('A');
		column++;
		while(column < x - 1)
		{
		if (column == (x - 2) && (row == 0 || row == y - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
			column++;
		}
		column = 0;
		row++;
		ft_putchar('\n');
	}
}	
