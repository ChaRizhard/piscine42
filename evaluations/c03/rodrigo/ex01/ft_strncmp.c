/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:23:05 by rdomingo          #+#    #+#             */
/*   Updated: 2022/12/09 18:35:59 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_strncmp("123456", "123456", '4'));
    printf("%d\n", ft_strncmp("123456", "12", '3'));
    printf("%d\n", ft_strncmp("123", "123456", '4'));
    printf("%d\n", ft_strncmp("123946", "123456", '4'));
}
