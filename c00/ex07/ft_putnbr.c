/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:41:29 by yacho             #+#    #+#             */
/*   Updated: 2020/10/21 19:19:34 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		ft_putnbr(number / 10);
		ft_putchar('8');
	}
	else if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr(-number);
	}
	else
	{
		if (number > 9)
		{
			ft_putnbr(number / 10);
		}
		ft_putchar(48 + number % 10);
	}
}
