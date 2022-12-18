/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:37:45 by dtong             #+#    #+#             */
/*   Updated: 2022/12/06 13:09:30 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
int main ()
{
    char x[] = "old string";
    char y[] = "new string";
    printf("%s\n", x);
    ft_strncpy(x, y, 7);
    printf("%s", x);
}
