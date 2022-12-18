/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:46:04 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/18 15:39:52 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	length;
	int	i;

	length = max - min;
	if (length <= 0)
		return (NULL);
	output = (int *) malloc(sizeof(int) * length);
	if (!output)
		return (NULL);
	i = 0;
	while (i < length)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}

/*
int	main(void)
{
	int	*dest;
	int	my_min;
	int	my_max;
	int	length;
	int	i;

	my_min = 10;
	my_max = 20;
	length = my_max - my_min;
	i = 0;
	dest = ft_range(my_min, my_max);
	while (i < length)
	{
		printf("dest[%d] contains: %d \n", i, dest[i]);
		i++;
	}
	return (0);
}
*/
