/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:21:03 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 11:54:53 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] >= 65 && str[i - 1] <= 90))
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		else if (str[i - 1] < 48 || str[i - 1] > 57 && str[i - 1] < 65)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[i - 1] > 122 || str[i - 1] > 90 && str[i - 1] < 97)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("before: %s\n", a);

	ft_strcapitalize(&a);
	printf("after: %s\n", a);
}
*/