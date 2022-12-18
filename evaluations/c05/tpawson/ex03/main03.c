/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:23:25 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/13 17:08:33 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_recursive_power.c"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(46340, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(1, 1));
	printf("%d\n", ft_recursive_power(1, 0));
	return (0);
}
