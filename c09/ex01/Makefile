SRCS = ./srcs/ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = ${SRCS:.c=.o}
INCLUDE = ./includes/
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
INDEX = ranlib ${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:	${OBJS}
		${AR} ${ARFLAGS} ${NAME} ${OBJS}
		${INDEX}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

