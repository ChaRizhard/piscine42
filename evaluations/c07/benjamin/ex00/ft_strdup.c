/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/15 13:48:12 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*target;

	i = 0;
	target = (char *)malloc(sizeof(src));
	if (target == NULL)
		return (NULL);
	while (src[i])
	{
		target[i] = src[i];
		i++;
	}
	return (target);
}


#include<unistd.h>
int    main(void)
{
    char input[100] = "my array of char...!";
	char *output;

	output = ft_strdup(input);

	int i = 0;
	while (i < 100)
	{
		write(1, &output[i], 1);
		i++;
	}
	
    return (0);
}
