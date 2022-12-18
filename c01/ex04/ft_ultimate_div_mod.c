/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:54:18 by rtran             #+#    #+#             */
/*   Updated: 2022/12/06 15:51:51 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int main()
{
	int	a;
	int	b;
	int	c;

	a = 21;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%i ", a);
	printf("remainder ");
	printf("%i ", b);
	return(0);
}
*/
