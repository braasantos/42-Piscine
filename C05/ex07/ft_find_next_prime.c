/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:47:30 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 19:39:15 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(2147483647));
	return (0);
}*/
