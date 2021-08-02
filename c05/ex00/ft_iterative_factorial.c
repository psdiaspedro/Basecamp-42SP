/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:40:28 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/02 08:40:30 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
	{
		return (0);
	}
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	while (nb > 1)
	{
		value = value * nb;
		nb--;
	}
	return (value);
}
