/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riguerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:32:48 by riguerra          #+#    #+#             */
/*   Updated: 2022/12/15 18:18:32 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str, 1);
}


int	main(void)
{
	char	*s = "\n\n\nHEEELLLLLL-OOOOO WORLD!!!!i!!!!!!!!!!!!!\n\n\n";
	ft_putstr(s);
}

