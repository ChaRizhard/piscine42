/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:25:32 by rehanna           #+#    #+#             */
/*   Updated: 2022/12/17 17:51:30 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (*str == ' ')
	str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
		a = a * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
	b = (b * 10) + ((int)*str - '0');
		str++;
	}
	b = b * a;
	return (b);
}


#include<stdio.h>
#include<unistd.h>
int main()
{
	char str[] = "     -+-++---+-6214353za213";
	printf("%d",ft_atoi(str));
}
