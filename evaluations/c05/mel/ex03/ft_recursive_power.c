/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:48:18 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:25:23 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	power_result;

	if (power < 0 || power > 30)
	{
		return (0);
	}
	else
	{
		i = 0;
		power_result = 1;
		while (i < power)
		{
			power_result *= nb;
			ft_recursive_power(power_result, power - 1);
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

  nb = 0;
  power = 0;
  printf("main after function %d\n", ft_recursive_power(nb, power));
  nb = 9;
  power = 5;
  printf("main after function %d\n", ft_recursive_power(nb, power));
  nb = 12;
  power = 5;
  printf("main after function %d\n", ft_recursive_power(nb, power));
  nb = 90;
  power = 5;
  printf("main after function %d\n", ft_recursive_power(nb, power));
  nb = 1;
  power = 32;
  printf("main after function %d\n", ft_recursive_power(nb, power));
  return (0);
}

