/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:39:13 by dtong             #+#    #+#             */
/*   Updated: 2022/12/06 13:17:25 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{		
			i++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
int main ()
{
    char i[] = "2000";
    int j = ft_str_is_numeric(i);
    printf("%d\n", j);
    return(0);
}
