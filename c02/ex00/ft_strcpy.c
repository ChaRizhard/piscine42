/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:44:21 by rtran             #+#    #+#             */
/*   Updated: 2022/12/10 17:57:28 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "Goodbye";
	printf("str1 before: %s\n", str1);
	printf("str2 before: %s\n", str2);
	ft_strcpy(str1, str2);
	printf("str1 after: %s\n", str1);
	return(0);
}
*/
