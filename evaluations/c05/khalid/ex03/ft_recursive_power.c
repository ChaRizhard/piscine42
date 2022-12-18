/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgire <kgire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:07:24 by kgire             #+#    #+#             */
/*   Updated: 2022/12/18 16:58:20 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb *= ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main()
{
	int rst;
	rst = ft_recursive_power(5,2);
	printf("%i", rst);
}

