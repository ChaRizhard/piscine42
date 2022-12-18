/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:20:43 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/06 12:41:50 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	swap;

	l = 0;
	r = 1;
	while (l < size - 1)
	{
		if (tab[l] > tab[r])
		{
			swap = tab[l];
			tab[l] = tab[r];
			tab[r] = swap;
			l = 0;
			r = 1;
		}
		else
		{
			l++;
			r++;
		}
	}
}

#include <stdio.h>
int	main(void)
{
	int mixnumb[] = {21,8,6,1,20};

	printf("Original array = %i, ", mixnumb[0]);
	printf("%i, ", mixnumb[1]);
	printf("%i, ", mixnumb[2]);
	printf("%i, ", mixnumb[3]);
	printf("%i\n", mixnumb[4]);

	ft_sort_int_tab(mixnumb, 5);

	printf("Sorted array = %i, ", mixnumb[0]);
	printf("%i, ", mixnumb[1]);
	printf("%i, ", mixnumb[2]);
	printf("%i, ", mixnumb[3]);
	printf("%i\n", mixnumb[4]);

	return (0);
}
