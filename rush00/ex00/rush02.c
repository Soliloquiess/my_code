/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:51:20 by seobae            #+#    #+#             */
/*   Updated: 2020/10/18 14:36:05 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i < 2 && j < 2) || (i == 1 && j == x))
				ft_putchar('A');
			else if (i > 1 && j > 1 && i < y && j < x)
				ft_putchar(' ');
			else if ((j == 1 && i == y) || (i == y && j == x))
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
