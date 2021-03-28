/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:57:58 by yacho             #+#    #+#             */
/*   Updated: 2020/10/28 12:41:19 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (index != n)
	{
		return (s1[index] - s2[index]);
	}
	if (index == n)
	{
		return (0);
	}
	return (0);
}
