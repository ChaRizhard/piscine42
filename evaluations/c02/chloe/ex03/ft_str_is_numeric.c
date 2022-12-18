/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:25:48 by cvan-de-          #+#    #+#             */
/*   Updated: 2022/12/01 13:33:34 by cvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' || str[i] >= '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main ()
{
    char x[] = "123e";
    int y = ft_str_is_numeric(x);
    printf("%d\n", y);
    return(0);
} */
