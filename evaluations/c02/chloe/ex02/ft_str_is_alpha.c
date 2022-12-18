/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:57:02 by cvan-de-          #+#    #+#             */
/*   Updated: 2022/12/01 12:24:20 by cvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main ()
{
    char x[] = "hello";
	int y;
    y = ft_str_is_alpha(x);
    printf("%d\n", y);
} */