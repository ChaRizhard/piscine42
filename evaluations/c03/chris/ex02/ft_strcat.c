/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:40:48 by chmurphy          #+#    #+#             */
/*   Updated: 2022/12/17 14:22:47 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char c[10] = "asdf";
	char v[] = "jkl2345hjkl;";
	char a[] = "j";
	char *res = ft_strcat(c,v);
	printf("%s\n", (res));
	res = ft_strcat(c,a);
	return (0);
}*/
