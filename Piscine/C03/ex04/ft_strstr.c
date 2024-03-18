/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymeric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:22:34 by aymeric           #+#    #+#             */
/*   Updated: 2024/03/17 14:30:28 by aymeric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == to_find[j])
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);

}

int	main()
{
	char c = "Hello world, welcome to the universe";
	char d = "welcome";
	char result = strstr(c, d);

	printf("%ld\n", result);
}
