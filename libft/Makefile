# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 16:39:58 by vmikayel          #+#    #+#              #
#    Updated: 2022/04/01 15:01:08 by vmikayel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_striteri.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_split.c 

BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

CC	= gcc
RM	= rm -f 
AR	= ar rc
RN	= ranlib
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
OBJS	= ${SRCS:.c=.o}
OBJSBONUS = ${BONUS:.c=.o}
.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
		${AR} ${NAME} ${OBJS}
bonus:	${OBJS} ${OBJSBONUS}
		${AR} ${NAME} ${OBJS} ${OBJSBONUS}
all:	${NAME}
clean:
		${RM} ${OBJS} ${OBJSBONUS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all


.PHONY:		all clean fclean re
