/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:17:41 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 18:51:33 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*int	main(void)
{
	printf("%i", ft_recursive_factorial(1));
	return (0);
}*/
