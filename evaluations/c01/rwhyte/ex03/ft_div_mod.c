/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:17:37 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/05 16:19:30 by rwhyte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	divnum;
	int	modnum;

	a = 8;
	b = 3;
	divnum = 0;
	modnum = 0;
	ft_div_mod(a, b, &divnum, &modnum);
	printf("%i divided by %i equals %i", a, b, divnum);
	printf("and the remainder is %i", modnum);
	return (0);
}*/
