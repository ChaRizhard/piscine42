# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhuynh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 12:35:39 by vhuynh            #+#    #+#              #
#    Updated: 2022/12/17 13:05:28 by vhuynh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh
rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rc libft.a *.o
find . -name "*.o" -type f -delete
