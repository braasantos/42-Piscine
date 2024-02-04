/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:35:16 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/26 13:08:28 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	num;
	int	br;

	num = *a;
	br = *b;
	*a = (num / br);
	*b = (num % br);
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%i\n", a);
	printf("%i\n", b);
	return (0);
}*/
