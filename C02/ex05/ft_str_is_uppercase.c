/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:59:21 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/27 14:25:02 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	//char	a[] = "2#ABCDdefGhijklMnopqrsTuvwyxz";
	char	b[] = "ABCDEFGHIJKLMNOPQRSTUVWYXZ";
	//char	c[] = "";
	printf("%d", ft_str_is_uppercase(b));
}*/
