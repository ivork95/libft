NAME	=	libft.a
SRCS	=	ft_memset.c
			ft_bzero.c
			ft_memcpy.c
			ft_memccpy.c
			ft_memmove.c
			ft_memchr.c
			ft_memcmp.c
			ft_strlen.c
			ft_strlcpy.c
			ft_strlcat.c
			ft_strchr.c
			ft_strrchr.c
			ft_strnstr.c
			ft_strncmp.c
			ft_atoi.c
			ft_isalpha.c
			ft_isdigit.c
			ft_isalnum.c
			ft_isascii.c
			ft_isprint.c
			ft_toupper.c
			ft_tolower.c
			ft_calloc.c
OBJS	=	$(srcs:.C=.O)
LIBC	=	ar -rcs
RM		=	rm -f
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
INCS	=	.
all:		$(NAME)
$(NAME):	$(OBJS)
			${LIBC} $(NAME) $(OBJS)
.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}
clean:
			${RM} $(OBJS)
fclean:     clean
			${RM} $(NAME)
re:			fclean all
.PHONY:		all .c.o clean fclean re
