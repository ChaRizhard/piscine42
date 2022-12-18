/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:20:07 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/06 12:22:27 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num;

	num = *a / *b;
	*b = *a % *b;
	*a = num;
}

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	printf("%i divided by %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("equals %i and remainder of %i", a, b);
	return (0);
}
