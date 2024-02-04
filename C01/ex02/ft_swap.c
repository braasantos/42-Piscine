/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:44:42 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/25 13:09:01 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*int	main(void)
{
	int	i;
	int	j;

	i = 4;
	j = 2;
	ft_swap(&i, &j);
	printf("%i\n", i);
	printf("%i\n", j);
	return (0);
}*/