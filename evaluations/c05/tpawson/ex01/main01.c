/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:05:45 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/12 16:09:23 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_recursive_factorial.c"
#include <stdio.h>

int	main (void)
{
	int y;

	y = 4;
	printf("%d\n", ft_recursive_factorial(y));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	return(0);
}
