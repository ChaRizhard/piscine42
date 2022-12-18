/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:25 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 12:14:43 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char dest[5];
	char src[10] = "12345678";

	printf("src = %s\n", src);
	int i = ft_strlcpy(dest, src, 5);
	printf("dest = %s\n", dest);
	printf("i = %d", i);
}
*/