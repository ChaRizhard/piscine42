/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhows <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:13:17 by mhows             #+#    #+#             */
/*   Updated: 2022/12/11 16:22:45 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

#include <stdio.h>
int main(void)
{
  int nb;
  int result;

  nb = -9;
  result = ft_recursive_factorial(nb);
  printf("main after function %d\n", result);
  nb = 0;
  result = ft_recursive_factorial(nb);
  printf("main after function %d\n", result);
  nb = 9;
  result = ft_recursive_factorial(nb);
  printf("main after function %d\n", result);
  nb = 100;
  result = ft_recursive_factorial(nb);
  printf("main after function %d\n", result);
  return 0;
}

