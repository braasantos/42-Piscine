/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:36:08 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/28 08:08:47 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	if (str[i] == '\0')
	{
		check = 1;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	char	str1[] = "abcdefghijklmnopqrstuvxz";
	//char	str2[] = "abCG64*&3hijklmo9()!";
	//char	str3[] = "";

	printf("%d", ft_str_is_alpha(str1));
}*/
