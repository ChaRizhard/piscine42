/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:16:34 by tquemato          #+#    #+#             */
/*   Updated: 2022/12/15 17:49:39 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dp;
	int	sp;

	dp = 0;
	sp = 0;
	while (dest[dp] != '\0')
	{
		dp++;
	}
	while (src[sp] != '\0')
	{
		dest[dp] = src [sp];
		dp++;
		sp++;
	}
	dest[dp] = '\0';
	return (dest);
}


int	main(void)
{
	char dest[30] = "I love ";
	printf("%s\n", ft_strcat(dest, "Beer, "));
	printf("%s\n", ft_strcat(dest, "lime "));
	printf("%s\n", ft_strcat(dest, "& sunshine "));
	return (0);
}

