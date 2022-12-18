/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:27:56 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/13 11:49:28 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_is_prime.c"
#include <stdio.h>

int	 main(void)
{
	printf("%d\n",ft_is_prime(3));	
	printf("%d\n",ft_is_prime(4));
	printf("%d\n",ft_is_prime(5));
	printf("%d\n",ft_is_prime(10));
	printf("%d\n",ft_is_prime(11));
	printf("%d\n",ft_is_prime(113));
	return (0);
}

