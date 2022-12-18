/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:26:12 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/13 17:07:31 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_iterative_power.c"
#include <stdio.h>

int	main (void)
{
	printf("%d\n", ft_iterative_power(4, 4));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(-4, 4));
	printf("%d\n", ft_iterative_power(1, 1));
	return (0);
}
