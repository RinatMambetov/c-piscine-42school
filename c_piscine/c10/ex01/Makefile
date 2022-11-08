# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 09:35:40 by greita            #+#    #+#              #
#    Updated: 2021/09/14 09:37:52 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            = ft_cat
CC              = gcc
CFLAGS          = -Wall -Wextra -Werror -c
LFLAGS          = -Wall -Wextra -Werror -o
SOURCE          = main.c
OBJS            = ${patsubst %.c, %.o, ${SOURCE}}

all:            ${NAME}
${NAME}:
                ${CC} ${CFLAGS} ${SOURCE}
                ${CC} ${LFLAGS} ${NAME} ${OBJS}
clean:
				rm -f ${OBJS}
fclean:         clean
                rm -f ${NAME}
.PHONY:         all clean fclean 
