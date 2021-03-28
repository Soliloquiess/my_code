/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:03:26 by yacho             #+#    #+#             */
/*   Updated: 2020/10/21 19:20:17 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *array)
{
	int	index;
	int	check;

	index = 0;
	while (index < n)
	{
		ft_putchar(48 + array[index]);
		index++;
	}
	index = n - 1;
	check = 1;
	while (index >= 0)
	{
		if (array[index] != 9 - (n - 1 - index))
		{
			check = 0;
			break ;
		}
		index--;
	}
	if (check == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int index_now, int *array, int st_index)
{
	int value;
	int max;

	if (index_now == n)
	{
		ft_print(n, array);
	}
	else
	{
		max = 10 - (n - index_now);
		value = st_index + 1;
		while (value <= max)
		{
			array[index_now] = value;
			ft_print_combn_recursive(n, index_now + 1, array, value);
			value++;
		}
	}
}

void	ft_print_combn(int n)
{
	int array[10];
	int index;

	index = 0;
	while (index < n)
	{
		array[index] = 0;
		index++;
	}
	ft_print_combn_recursive(n, 0, array, -1);
}
