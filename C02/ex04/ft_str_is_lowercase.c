/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:42:36 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/27 14:23:58 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	a[] = "abcdefGhijklMnopqrsTuvwyxz";
	//char	b[] = "abcdefghijklmnopqrstuvwyxz";
	//char	c[] = "";
	printf("%d", ft_str_is_lowercase(a));
}*/
