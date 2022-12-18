/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 08:49:38 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 09:22:26 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int    main(void)
{
    int is_a;
	int is_b;
	
    char a[] = "124abc";
	char b[] = "124";

    is_a = ft_str_is_numeric(a);
    printf("%s, return %d\n", a, is_a);
	
	is_b = ft_str_is_numeric(b);
    printf("%s, return %d\n", b, is_b);
}
*/
