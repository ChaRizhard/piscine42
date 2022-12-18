/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:06:28 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/06 12:34:14 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab_rev[20];
	int	count;

	count = 0;
	while (size >= 0)
	{
		tab_rev[size] = tab[count];
		size--;
		count++;
	}
	tab = tab_rev;
}

#include	<stdio.h>
int main(void)
{
    int tab_array[20] = {1,2,3,4,5,6,7,8,9};

    ft_rev_int_tab(tab_array, 8);
    return (0);
}
