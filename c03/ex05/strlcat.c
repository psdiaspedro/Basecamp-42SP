/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:45:54 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/01 21:02:35 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len_dst;
	unsigned int	len_total;
	unsigned int	i;

	len_total = ft_strlen(src) + ft_strlen(dest);
	len_dst = ft_strlen(dest);
	i = 0;
	if (size < len_dst)
	{
		return (ft_strlen(src) + size);
	}
	else
	{
		while ((src[i] != '\0') && ((len_dst + 1) < size))
		{
			dest[len_dst] = src[i];
			len_dst++;
			i++;
		}
		if (len_dst != size)
		{
			dest[len_dst] = '\0';
		}
		return (len_total);
	}
}
