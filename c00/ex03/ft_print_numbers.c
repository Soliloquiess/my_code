/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:33:17 by yacho             #+#    #+#             */
/*   Updated: 2020/10/21 19:13:50 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)
{
	char number;
	char number2;

	number = '0';
	number2 = '9';
	while (number <= number2)
	{
		ft_print(number);
		number++;
	}
}
