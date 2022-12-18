/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:04:52 by rtran             #+#    #+#             */
/*   Updated: 2022/12/10 17:57:07 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str [i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	x[] = "WEPOROPEWR";;
	char	*str = ft_strlowcase(x);
	printf("%s\n", str);
	return(0);
}
*/
