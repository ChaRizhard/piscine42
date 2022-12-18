/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:53:58 by rtran             #+#    #+#             */
/*   Updated: 2022/12/06 15:51:23 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int	a;
	int	b;
	int	c;
	a = 20;
	b = 30;

	ft_swap(&a, &b);
	printf("This pointer *a should be 20 but it is, %i \n", a);
	printf("This pointer *b should be 30 but it is, %i", b);
	return(0);
}
*/
