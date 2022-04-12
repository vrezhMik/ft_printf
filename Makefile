LIBFT	=	./libft/libft.a

NAME	=	libftprintf.a


SRCS	=  src/ft_printf.c 	src/ft_print_uns.c src/ft_print_str.c src/ft_print_ptr.c src/ft_print_nbr.c src/ft_print_hex.c src/ft_print_chr.c

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
