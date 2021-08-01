/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 11:56:23 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/01 12:00:38 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	before;

	i = 0;
	ft_strlowcase(str);
	if ((str[i] != '\0') && (str[i] >= 97 && str[i] <= 122))
	{
		str[i] += -32;
		i++;
	}
	before = i - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[before] >= 32 && str[before] <= 47)
			{
				str[i] += -32;
			}
		}
		i++;
		before++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
