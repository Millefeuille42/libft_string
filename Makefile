# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 18:42:28 by dboyer            #+#    #+#              #
#    Updated: 2020/05/12 19:34:10 by dboyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftstring.a

STRING_METHOD = srcs/string/ft_string.c\
				srcs/string/ft_clear_string.c\

SRCS 	=	srcs/ft_parse.c\
			srcs/ft_clear.c\
			srcs/ft_move_until.c\
			srcs/ft_parse.c\
			srcs/ft_str_isequal.c\
			srcs/ft_strlen.c\
			srcs/ft_strncmp.c\
			srcs/ft_memcpy.c\
			srcs/ft_memmove.c\
			srcs/ft_strdup.c\

OBJS    = 	$(SRCS:.c=.o)

STRING_METHOD_OBJS = $(STRING_METHOD:.c=.o)

HEADERS =	-I ./includes/

CFLAGS  = -Werror -Wall -Wextra -O3 ${HEADERS} 

CC              = clang

RM      =       rm -f

INCS = ./includes/libft_string.h\
		./includes/string_object.h

%.o: %.c ${INCS}
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(STRING_METHOD_OBJS)
	ar rcs $(NAME) $(OBJS) $(STRING_METHOD_OBJS)

all             :       $(NAME)

clean   :
	$(RM) $(OBJS) $(STRING_METHOD_OBJS)

fclean  :       clean
	$(RM) $(NAME)

re              :       fclean all

.PHONY  : all clean fclean re
