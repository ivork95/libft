# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ivork <ivork@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 12:53:39 by ivork         #+#    #+#                  #
#    Updated: 2020/11/22 19:56:32 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

SRCS_B	=	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c

OBJS	=	$(SRCS:.c=.o)
OBJS_B	=	$(SRCS_B:.c=.o)
LIBC	=	ar -rcs
RM		=	rm -f
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
INCS	=	.

ifdef WITH_BONUS
RELEVANT_OBJS = $(OBJS) $(OBJS_B)
else
RELEVANT_OBJS = $(OBJS)
endif

all:		$(NAME)

$(NAME):	$(RELEVANT_OBJS)
			${LIBC} $(NAME) $(RELEVANT_OBJS)

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

bonus:
			$(MAKE) WITH_BONUS=1 all

clean:
			${RM} $(OBJS) $(OBJS_B)

fclean:     clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all .c.o clean fclean re
