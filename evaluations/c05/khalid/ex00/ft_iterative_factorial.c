/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgire <kgire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:26:28 by kgire             #+#    #+#             */
/*   Updated: 2022/12/18 16:51:37 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	while (nb > 0)
	{
		fct *= nb;
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
		printf("%d = %d\n", nb,ft_iterative_factorial(nb));
		nb++;
	}
	return(0);
}
