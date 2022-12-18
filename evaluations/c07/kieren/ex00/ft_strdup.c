/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:47:24 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/15 16:49:22 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*parr;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len = i;
	parr = (char *)malloc((len + 1) * sizeof(char));
	if (parr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		parr[i] = src[i];
		i++;
	}
	parr[i] = '\0';
	return (parr);
}

int main(void)
{
	char arr[] = "A string cannot tie itself";
	printf("%s\n", ft_strdup(arr));
}
