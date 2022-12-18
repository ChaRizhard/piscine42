/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riguerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:51:38 by riguerra          #+#    #+#             */
/*   Updated: 2022/12/15 18:19:24 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb <= 9)
	{
		ft_putchar(nb % 10 + '0');
	}
}


int	main(void)
{
	printf("\n\n\n\n");
	ft_putnbr(2147483647);
	printf("\n\n");
	ft_putnbr(-2147483647);
	
	printf("\n\n");
//	ft_putnbr(2147483648);
	printf("\n\n");
//	ft_putnbr(-2147483648);
	
	printf("\n\n\n\n");
}

