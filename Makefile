# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 20:25:12 by llopez-a          #+#    #+#              #
#    Updated: 2022/04/25 20:25:14 by llopez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_choose_format.c \
			ft_printf_char.c \
			ft_printf_str.c \
			ft_printf_ptr.c \
			ft_printf_hex.c \
			ft_printf_hexcap.c \
			ft_printf_int.c \
			ft_printf_un.c

OBJ		=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	= 	-Wall -Werror -Wextra

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rc $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
