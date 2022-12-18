/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:48:14 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:24:23 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	power_result;

	if (power < 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		power_result = 1;
		while (i < power)
		{
			power_result *= (nb);
			i++;
		}
		return (power_result);
	}
}

#include <stdio.h>
int main(void)
{
  int nb;
  int power;
  int result;

	nb = 0;
  power = 0;
  result = ft_iterative_power(nb, power);
  printf("main after function %d\n", result);
  nb = 0;
  power = 8;
  result = ft_iterative_power(nb, power);
  printf("main after function %d\n", result);
  nb = 9;
  power = 7;
  result = ft_iterative_power(nb, power);
  printf("main after function %d\n", result);
  nb = 12;
  power = 5;
  result = ft_iterative_power(nb, power);
  printf("main after function %d\n", result);
  nb = 100;
  power = 5;
  result = ft_iterative_power(nb, power);
  printf("main after function %d\n", result);
	nb = 2;
	power = 32;
	result = ft_iterative_power(nb, power);
	printf("main after function %d\n", result);
  return 0;
}

