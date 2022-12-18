/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:58:47 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:34:00 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (i * i != nb)
		{
			i++;
		}
		else if (i * i == nb)
		{
			return (i);
		}
	}
	return (0);
}

#include <stdio.h>
//#include "ft_sqrt.c"
int	main(void)
{
	int     nb1;
	int     result1;
	int     nb2;
	int     result2;
	int    	nb3;
	int     result3;
	int     nb4;
	int     result4;

	nb1 = -4;
	result1 = ft_sqrt(nb1);
	printf("result for -4: %d\n", result1);
	nb2 = 5;
	result2 = ft_sqrt(nb2);
	printf("result for 5: %d\n", result2);
	nb3 = 16;
	result3 = ft_sqrt(nb3);
	printf("result for 16: %d\n", result3);
	nb4 = 46340;
	result4 = ft_sqrt(nb4);
	printf("result for 46340: %d\n", result4);
	return (0);
}

