/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:29:40 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 18:49:38 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	i = 1; 
	fac = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		fac *= i;
		i++;
	}
	return (fac);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}*/
