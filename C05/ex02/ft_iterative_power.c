/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:21:08 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 18:58:36 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pwr;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	pwr = 1;
	while (i <= power)
	{
		pwr *= nb;
		i++;
	}
	return (pwr);
}

/*int	main(void)
{
	printf("%i", ft_iterative_power(0, 2));
	return (0);
}*/
