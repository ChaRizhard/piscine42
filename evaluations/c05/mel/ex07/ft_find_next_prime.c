/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:21:29 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:40:01 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
	{
		return (0);
	}
	else
	{
		while (i < nb + 1)
		{
			if (nb != i && nb % i == 0)
			{
				return (0);
			}
		i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	prime_check;

	i = 2;
	j = nb;
	prime_check = 0;
	if (nb < i)
	{
		return (2);
	}
	else
	{
		i = nb;
		while (j <= 2147483647 && prime_check != 1)
		{
			i = j;
			prime_check = ft_is_prime(j);
			j++;
		}
		return (i);
	}
	return (0);
}

#include <stdio.h>
//#include "ft_find_next_prime.c"
int	main(void)
{
	int	nb1;
	int	result1;
	int	nb2;
	int	result2;
	int	nb3;
	int	result3;
	int	nb4;
	int	result4;

	nb1 = 1;
	while (nb1 < 100)
	{
		result1 = ft_find_next_prime(nb1);
		printf("result for %d: %d\n", nb1, result1);
		nb1++;
	}
	nb2 = 4;
	result2 = ft_find_next_prime(nb2);
	printf("result for 4: %d\n", result2);
	nb3 = 11;
	result3 = ft_find_next_prime(nb3);
	printf("result for 11: %d\n", result3);
	nb4 = 2147483647;
	result4 = ft_find_next_prime(nb4);
	printf("result for 2147483647: %d\n", result4);
	return (0);
}

