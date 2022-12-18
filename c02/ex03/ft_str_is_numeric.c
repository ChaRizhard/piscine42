/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:06:16 by rtran             #+#    #+#             */
/*   Updated: 2022/12/10 17:58:32 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
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
int	main()
{
	char	*str;

	str = "1";
	printf("%d\n", ft_str_is_numeric(str));
	return(0);
}
*/
