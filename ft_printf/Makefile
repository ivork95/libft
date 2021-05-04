# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ivork <ivork@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/16 15:10:04 by ivork         #+#    #+#                  #
#    Updated: 2021/01/16 15:10:04 by ivork         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_printf.c			\
				ft_printf_utils.c	\
				ft_print_char.c		\
				ft_print_num.c		\
				ft_print_pos.c		\
				ft_print_neg.c		\
				ft_print_point.c

OBJ_FILES	=	$(SRCS:%.c=%.o)
HEADER_FILE	=	ft_printf.h
FLAGS		=	-Wall -Wextra -Werror
COMPILER	=	gcc
LIBFT		=	libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES)
	cp $< $@
	ar -crs $@ $(OBJ_FILES)
%.o: %.c $(HEADER_FILES)
	$(CC) -c $(FLAGS) -o $@ $<
$(LIBFT):
	make -C libft

clean:
	make fclean -C libft
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
