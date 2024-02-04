/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:41:19 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/07/30 16:34:28 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	mainstr[] = "IM BATMAN";
	char	substr[] = "BATMAN";
	char	*result2 = ft_strstr(mainstr, substr);

	if (result2 == NULL)
	{
		printf("Substring not found");
	}
	else
	{
		printf("Substring found at position: %ld", result2 - mainstr);
	}
}*/
