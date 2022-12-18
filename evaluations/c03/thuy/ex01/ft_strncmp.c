/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:15:01 by tquemato          #+#    #+#             */
/*   Updated: 2022/12/15 17:48:28 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while ((s1[pos] != '\0' || s2[pos] != '\0') && pos < n)
	{
		if (s1[pos] > s2[pos])
		{
			return (1);
		}
		else if (s1[pos] < s2[pos])
		{
			return (-1);
		}
		pos++;
	}
	return (0);
}


int	main()
{
	printf("%d\n", ft_strncmp("abcde", "ab", 3));
    printf("%d\n", ft_strncmp("abcde", "abcdefg", 5));
    printf("%d\n", ft_strncmp("abcde", "abcdefg", 6));
}

