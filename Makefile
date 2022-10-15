# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 13:35:51 by baalbade          #+#    #+#              #
#    Updated: 2022/10/12 13:35:54 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

AR		=	ar
ARFLAGS	=	rc

RM		=	rm -rf

SRCS	=	ft_printf.c \
			ft_printf_numbers_utils.c \
			ft_printf_char_utils.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
