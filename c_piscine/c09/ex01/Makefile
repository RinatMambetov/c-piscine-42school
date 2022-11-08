# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: greita <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 15:32:36 by greita            #+#    #+#              #
#    Updated: 2021/10/10 11:04:20 by greita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
SRC_DIR			= ./srcs/
SRC_FILES		= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ_FILES 		= ${SRC_FILES:.c=.o}
SRCS			= ${addprefix${SRC_DIR}, ${SRC_FILES}}
OBJS			= ${addprefix${SRC_DIR}, ${OBJ_FILES}}
HEADER			= -I ./includes/
LIBC			= ar rc
LIBR			= ranlib
RM				= rm -f
all:		 	obj ${NAME}
.c.o:
				${CC} ${CFLAGS} -c $< -o $(<:.c=.o) ${HEADER}
obj: ${SRCS}
${SRC_DIR}%.o: ${SRC_DIR}%.c
	${CC} ${CFLAGS} -c $< -o $@ ${HEADER}
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBS} ${NAME}
	${CC} ${CFLAGS} -o prog.out test.c ${NAME}
	./prog.out
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME} prog.out
re: fclean all
.PHONY: all clean fclean re
