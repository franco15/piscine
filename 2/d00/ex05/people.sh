# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 21:45:36 by lfranco-          #+#    #+#              #
#    Updated: 2017/01/09 21:52:08 by lfranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#! /bin/sh

ldapsearch -LLL -S -cn "uid=z*" cn | grep -v "^$" | grep -v "^d"
