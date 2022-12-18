/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:54 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/18 12:49:21 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	str_len(char *src)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strdup(char *src)
{
	char	*output;
	int	i;

	output = (char *)malloc(str_len(src));
	if (!(output))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

/*
int	main(void)
{
	char *dest;
	char array[] = "Hello, this is a test string.";
			dest = ft_strdup(array);
			printf("Dest contains: %s \n", dest);
	return (0);
}
*/
