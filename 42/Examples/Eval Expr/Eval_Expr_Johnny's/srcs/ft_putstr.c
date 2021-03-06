/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:20:14 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 20:02:28 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_putstr(char *str)
{
	char *p;

	p = str;
	while (*p != '\0')
	{
		ft_putchar(*p);
		p++;
	}
}
