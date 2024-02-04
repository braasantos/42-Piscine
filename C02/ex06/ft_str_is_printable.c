/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:13:28 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/28 12:22:17 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
	//char	a[] = "2#ABC DdefGhi-+jklMno#%3pqrsTuvwyxz";
	char	b[] = "!)(0123abjdHDS~}";
	//char	c[] = "";
	printf("%d", ft_str_is_printable(b));
}*/
