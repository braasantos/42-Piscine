/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:12:11 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/26 13:05:17 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = sizeof(a) / sizeof(a[0]);
	int	i = 0;

	ft_rev_int_tab(a, size);
	while (i < size)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
