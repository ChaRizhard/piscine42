/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgire <kgire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:07:30 by kgire             #+#    #+#             */
/*   Updated: 2022/12/18 16:52:21 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb > 0)
	{
		fct *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fct);
}

#include <stdio.h>
int main()
{
	int	nb;
	nb = -1;
	while (nb < 10)
	{
		printf("%i = %i\n", nb, ft_recursive_factorial(nb));
		nb++;
	}
	return(0);
}

