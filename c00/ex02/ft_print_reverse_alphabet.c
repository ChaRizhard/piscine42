/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:08:04 by rtran             #+#    #+#             */
/*   Updated: 2022/12/05 15:24:26 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i <= 122 && i >= 97)
	{
		write (1, &i, 1);
		i--;
	}
}
//int main(void)
//{
//        ft_print_reverse_alphabet();
//        return(0);
//}
