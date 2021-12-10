NAME	= libftprintf.a

SRCS	= ft_printf.c ft_base.c ft_helper.c ft_utils.c ft_ptr_hup_hlow.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS} 
	ranlib ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:		fclean	all

.PHONY: all clean fclean re bonus
