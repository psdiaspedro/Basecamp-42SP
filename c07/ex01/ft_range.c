/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:52:06 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/02 08:52:07 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	range;

	i = 0;
	range = max - min - 1;
	if (min >= max)
	{
		return (0);
	}
	matrix = malloc(range * sizeof(int));
	if (matrix == 0)
	{
		return (0);
	}
	while (i <= range)
	{
		matrix[i] = min + i;
		i++;
	}
	return (matrix);
}
