/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prsingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:32:36 by prsingh           #+#    #+#             */
/*   Updated: 2022/12/18 17:18:58 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		range;
	int		*dest;

	range = max - min;
	if (min >= max)
	{
		return (0);
	}
	dest = malloc ((sizeof(int) + 1) * range);
	i = 0;
	while (i < range)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
	int min;
	int max;
    int *range;
	int i;
	
	i = 0;
	min = 4;
	max = 14;
	range = ft_range(min, max);

	while(i < (max - min))
	{
		printf("range[%d] is: %d\n", i, range[i]);
		i++;
	}
		return (0);
}

