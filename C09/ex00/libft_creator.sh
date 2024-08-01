# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 14:20:47 by rgabdrak          #+#    #+#              #
#    Updated: 2024/07/27 14:20:49 by rgabdrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc="gcc"
src=*.c
flags="-c -Wall -Werror -Wextra"
lib_name="libft.a"

$cc $flags $src
ar rc $lib_name *.o
ranlib $lib_name
rm *.o
