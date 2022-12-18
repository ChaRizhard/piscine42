/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:12:04 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 14:42:38 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}


#include <stdio.h>
int	main(void)
{
	char	final[100]; 
	char	dest[100];
	char src[] = "hello World";

	printf("before: \n src = %s\n  new_src = %s\n ", src, dest);

	dest = ft_strcpy(dest, src);

	printf("after: \n src = %s\n new_src = %s\n ", src, new_src);
	return (0);
}

