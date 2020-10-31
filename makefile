# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ivork <ivork@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/29 17:26:29 by ivork         #+#    #+#                  #
#    Updated: 2020/10/31 15:50:24 by ivork         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isalpha.c            \
			ft_memchr.c             \
			ft_strchr.c             \
			ft_strncmp.c            \
			ft_atoi.c               \
			ft_isascii.c            \
			ft_memcmp.c             \
			ft_strdup.c             \
			ft_strnstr.c            \
			ft_bzero.c              \
			ft_isdigit.c            \
			ft_memcpy.c             \
			ft_strlcat.c            \
			ft_strrchr.c            \
			ft_calloc.c             \
			ft_isprint.c            \
			ft_memmove.c            \
			ft_strlcpy.c            \
			ft_tolower.c            \
			ft_isalnum.c            \
			ft_memccpy.c            \
			ft_memset.c             \
			ft_strlen.c             \
			ft_toupper.c            \
			ft_strdup.c
OBJS    =	$(SRCS:.c=.o)
LIBC    =	ar -rcs
RM      =	rm -f
CC      =	gcc
FLAGS   =	-Wall -Werror -Wextra
INCS    =	.
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