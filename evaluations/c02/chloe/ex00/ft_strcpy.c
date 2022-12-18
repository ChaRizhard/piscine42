/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:31:14 by cvan-de-          #+#    #+#             */
/*   Updated: 2022/12/06 14:01:13 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*#include <stdio.h>
int main ()
{
    char x[] = "old string";
    char y[] = "new string";
    printf("%s\n", x);
    ft_strcpy(x, y);
    printf("%s", x);
} */
