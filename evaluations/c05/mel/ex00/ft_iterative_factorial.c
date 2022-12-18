/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:59:00 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:18:07 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial_result;

	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		factorial_result = 1;
		while (i < nb)
		{
			factorial_result *= (i + 1);
			i++;
		}
		return (factorial_result);
	}
}

#include <stdio.h>
//#include "ft_iterative_factorial.c"

int main(void)
{
  int nb;
  int result;

	nb = -25;
  result = ft_iterative_factorial(nb);
  printf("main after function %d\n", result);
	 nb = 0;
  result = ft_iterative_factorial(nb);
  printf("main after function %d\n", result);
  nb = 9;
  result = ft_iterative_factorial(nb);
  printf("main after function %d\n", result);
  nb = 12;
  result = ft_iterative_factorial(nb);
  printf("main after function %d\n", result);
  nb = 100;
  result = ft_iterative_factorial(nb);
  printf("main after function %d\n", result);
  return (0);
}

