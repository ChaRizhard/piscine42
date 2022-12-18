/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:40:42 by dtong             #+#    #+#             */
/*   Updated: 2022/12/05 14:19:55 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
			continue ;
		}
		else
		{
			return (0);
			break ;
		}
	}
	return (1);
}
/*int main ()
{
    char i[] = "SLRk";
    int j = ft_str_is_uppercase(i);
    printf("%d\n", j);
    return(0);
}*/
