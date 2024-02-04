/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:56:14 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/28 08:08:14 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			check = 1;
		}
		else 
		{
			return (0);
		}
		i++;
	}
	return (check);
}

/*int	main(void)
{
	char	a[] = "123456724683";
	//char	b[] = "2f35%#gb4752";
	//char	c[] = "";
	printf("%d", ft_str_is_numeric(a));
}*/
