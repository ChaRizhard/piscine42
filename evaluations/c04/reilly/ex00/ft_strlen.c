/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:54:16 by rehanna           #+#    #+#             */
/*   Updated: 2022/12/14 22:11:49 by rehanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	int	i;
	int	n;
	char str[] = "text";
	n = strlen(str);
	i = ft_strlen(str);
	printf("%d,,,%d",n,i);
}*/
