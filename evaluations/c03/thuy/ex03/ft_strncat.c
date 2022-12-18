/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquemato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:19:06 by tquemato          #+#    #+#             */
/*   Updated: 2022/12/15 17:51:03 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dp;
	unsigned int	sp;

	dp = 0;
	sp = 0;
	while (dest[dp] != '\0')
	{
		dp++;
	}
	while (src[sp] != '\0' && sp < nb)
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
	char src1[] = "Beer ";
	char src2[] = "lime ";
	char src3[] = "& sunshine ";
	printf("%s\n", ft_strncat(dest, src1, 6));
	printf("%s\n", ft_strncat(dest, src2, 10));
	printf("%s\n", ft_strncat(dest, src3, 15));
	return (0);
}

