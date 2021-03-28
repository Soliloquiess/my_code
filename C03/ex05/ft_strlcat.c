/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:03:19 by yacho             #+#    #+#             */
/*   Updated: 2020/10/28 12:39:55 by yacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str++) != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	d_i;
	unsigned int	s_i;

	d_i = 0;
	while (d_i < size && dest[d_i] != '\0')
	{
		d_i++;
	}
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	s_i = 0;
	while (s_i < src_len && dest_len + s_i + 1 < size)
	{
		dest[dest_len + s_i] = src[s_i];
		s_i++;
	}
	dest[dest_len + s_i] = '\0';
	return (d_i + src_len);
}
