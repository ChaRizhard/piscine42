/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:40:48 by chmurphy          #+#    #+#             */
/*   Updated: 2022/12/17 17:35:28 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
			i++;
	while (src[k] != '\0')
	{
		if (k < nb)
			dest[i + k] = src[k];
			k++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char c[13] = "asdf";
	char v[] = "jkl;a";
	unsigned int nb;

	char x[] = "asdf1234567890qwerty";
	nb = 13;
	char *res;
	res = ft_strncat(c,v,nb);
	printf("%s\n", (res));
	res = ft_strncat(c,x,nb);
	printf("%s\n", (res));
}*/
