/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:04:43 by yacho             #+#    #+#             */
/*   Updated: 2020/10/28 12:40:28 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int s_i;

	i = 0;
	s_i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s_i] != '\0' && s_i < nb)
	{
		dest[i + s_i] = src[s_i];
		s_i++;
	}
	dest[i + s_i] = '\0';
	return (dest);
}
