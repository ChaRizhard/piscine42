/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:58:26 by chmurphy          #+#    #+#             */
/*   Updated: 2022/12/17 18:50:06 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (i < (n - 1))
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
			i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main()
{
	unsigned int n = 4;

	printf("%d\n", ft_strncmp("asdf", "asdfg", n));
	printf("%d\n", ft_strncmp("asdf", "asdf", n));
	printf("%d\n", ft_strncmp("asdfg", "asdf", n));
}
