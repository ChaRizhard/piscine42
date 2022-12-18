/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwhyte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:01:26 by rwhyte            #+#    #+#             */
/*   Updated: 2022/12/06 12:32:20 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

#include    <stdio.h>
int	main(void)
{
	char mystring[32] = "Hello hello hel9 hellos";
	ft_strlen(mystring);
	printf("rtn count is : %i", ft_strlen(mystring));
	return (0);
}
