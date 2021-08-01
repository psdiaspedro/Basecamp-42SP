/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 11:56:28 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/01 12:00:14 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size < len)
	{
		dest[size - 1] = '\0';
	}
	else if (size != 0)
	{
		dest[i] = '\0';
	}
	return (len);
}
