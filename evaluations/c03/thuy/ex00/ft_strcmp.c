/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:12:36 by tquemato          #+#    #+#             */
/*   Updated: 2022/12/15 17:47:34 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] == s2[pos] && (s1[pos] != '\0' || s2[pos] != '\0'))
	{
		pos++;
	}
	return (s1[pos] - s2[pos]);
}


int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello1"));
	printf("%d\n", ft_strcmp("Hello", "He"));
	printf("%d\n", ft_strcmp("He", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	return (0);
}

