/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:07:58 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/06 19:05:52 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	fibo = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (fibo);
}

/*int	main(void)
{
	printf("%i", ft_fibonacci(7));
	return (0);
}*/
