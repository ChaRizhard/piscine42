/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:44:31 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/06 12:25:05 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *value)
{
	unsigned int	count;

	count = 0;
	while (*value != '\0')
	{
		count++;
		value++;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	int	size;

	size = ft_strlen(str);
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

#include <stdio.h>
int	main(void)
{
	char mystring[] = "Hello to you! if you try hard you will win!";

	ft_putstr(mystring);
	return (0);
}
