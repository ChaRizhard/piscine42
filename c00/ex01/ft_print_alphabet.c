/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:07:41 by rtran             #+#    #+#             */
/*   Updated: 2022/12/05 14:49:44 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i >= 97 && i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
//int main(void)
//{
//        ft_print_alphabet();
//        return(0);
//}