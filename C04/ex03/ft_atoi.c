/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:15:42 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/08/01 09:26:25 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	odd;

	i = 0;
	num = 0;
	odd = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			odd++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (!(odd % 2))
		return (num);
	return (num *= -1);
}

/*int	main(void)
{
	char	a[25] = " ----+---+123456789bb567";

	printf("%d\n", ft_atoi(a));
	return (0);
}*/
