/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymeric <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:02 by aymeric           #+#    #+#             */
/*   Updated: 2024/03/16 19:30:27 by aymeric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && *s1 != '\0')
		i++;
	return (*s1 - *s2);
}

int	main()
{
	char	c[] = "Antoni";
	char	d[] = "Antonin";

	printf(" %d\n", ft_strcmp(c, d));

	return 0;
}
