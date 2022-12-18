/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:19:27 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/05 16:16:49 by rwhyte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 5;
	printf("\nBefore:\n");
	printf("a is %i\n", a);
	printf("b is %i\n\n", b);
	ft_swap(&a, &b);
	printf("\nAfter:\n");
	printf("a is %i\n", a);
	printf("b is %i\n", b);
	return (0);
}*/
