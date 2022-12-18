/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgire <kgire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:07:40 by kgire             #+#    #+#             */
/*   Updated: 2022/12/18 16:52:55 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	rst;

	rst = 1;
	while (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		rst *= nb;
		power--;
	}
	return (rst);
}

#include <stdio.h>
int	main()
{
	int nb = 0;
	int power = 0;

	printf(" %i power %i is %i", nb, power, ft_iterative_power(nb, power));
	return(0);
}
