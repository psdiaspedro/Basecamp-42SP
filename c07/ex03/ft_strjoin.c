/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:51:56 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/02 08:54:37 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_strs(char **strs, int size)
{
	int	total_len;
	int	len;
	int	i;

	total_len = 0;
	len = 0;
	i = 0;
	while (i < size)
	{
		while (strs[i][len])
		{
			len++;
		}
		total_len += len;
		len = 0;
		i++;
	}
	return (total_len + 1);
}

int	len_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	j = 0;
	k = 0;
	if (size == 0)
	{
		dest = (char*) malloc(sizeof(char));
		return (dest);
	}
	dest = malloc(len_strs(strs, size) + (size - 1) * len_sep(sep));
	while (i < size)
	{
		while (strs[i][k])
		{
			dest[j++] = strs[i][k++];
		}
		k = 0;
		while (i < size - 1 && k < len_sep(sep))
		{
			dest[j++] = sep[k++];
		}
		k = 0;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
