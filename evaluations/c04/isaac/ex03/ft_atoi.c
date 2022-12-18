/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanderw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:29:05 by ivanderw          #+#    #+#             */
/*   Updated: 2022/12/10 14:31:50 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_minus_sign(char c)
{
	if (c == '-')
		return (1);
	return (0);
}

/*
 * Write a function that converts the initial portion of the string pointed 
 * by str to its int representation

• The string can start with an arbitray amount of white space (as determined
 by isspace(3))

• The string can be followed by an arbitrary amount of + and - signs, - sign 
 will change
the sign of the int returned based on the number of - is odd or even.

• Finally the string can be followed by any numbers of the base 10.

• Your function should read the string until the string stop following the 
rules and return the number found until now.

• You should not take care of overflow or underflow. result can be undefined 
 in that case.
*/

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	finished;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{	
		if (is_minus_sign(str[i]) && finished == 0)
			sign = -sign;
		if (is_numeric(str[i]) && finished == 0)
		{
			j = 0;
			while (is_numeric(str[i + j]))
			{
				result = (result * 10) + (str[i + j] - '0');
				j++;
			}
			finished = 1;
		}
		i++;
	}
	return (sign * result);
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_atoi(" -+--+--214748 3648 -5");
	printf("my atoi int result: %d \n", i);
	return (0);
}

