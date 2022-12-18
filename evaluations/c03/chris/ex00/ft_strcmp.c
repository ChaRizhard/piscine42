/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:56:15 by chmurphy          #+#    #+#             */
/*   Updated: 2022/12/17 14:15:45 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strcmp("asdfg", "asdf"));
	printf("%d\n", ft_strcmp("asdf", "asdf"));
	printf("%d\n", ft_strcmp("asdf", "asdfg"));
}*/
