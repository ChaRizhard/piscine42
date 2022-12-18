/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:40:15 by dtong             #+#    #+#             */
/*   Updated: 2022/12/05 14:14:54 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
/*int main ()
{
    char i[] = "saaaaaaaaaarQ";
    int j = ft_str_is_lowercase(i);
    printf("%d\n", j);
    return(0);
}*/
