/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:57:30 by paugusto          #+#    #+#             */
/*   Updated: 2021/07/30 22:59:51 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	n;

	nbr = &n;
	ft_ft (nbr);
	printf ("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}
