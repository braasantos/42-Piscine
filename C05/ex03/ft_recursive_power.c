/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:54:49 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 19:02:20 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*int	main(void)
{
	printf("%i", ft_recursive_power(4, 0));
	return (0);
}*/
