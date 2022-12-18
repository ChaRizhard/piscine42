/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:03:40 by rtran             #+#    #+#             */
/*   Updated: 2022/12/13 15:23:09 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	str1[] = "Hellooooooo";
	char	str2[] = "Goodbye";
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	//write(1, str1, 20);
	//write(1, "\n", 1);
	ft_strncpy(str1, str2, 4 );
	//write(1, str1, 20);
	printf("\nstr1: %s\n", str1);
	return(0);
}
*/
