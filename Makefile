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

SRCS 	=		srcs/string/ft_clear_string.c\
            	srcs/string/ft_string.c\
            	srcs/functions/ft_append.c\
            	srcs/functions/ft_parse.c\
            	srcs/functions/ft_move_until.c\
            	srcs/functions/ft_prepend.c\
            	srcs/functions/ft_str_isequal.c\
            	srcs/functions/ft_strlen.c\
            	srcs/dependencies/ft_clear.c\
            	srcs/dependencies/ft_strncmp.c\
            	srcs/dependencies/ft_memmove.c\
            	srcs/dependencies/ft_memcpy.c\
            	srcs/dependencies/ft_strdup.c\
            	srcs/includes/libft_string.h\
            	srcs/includes/string_object.h

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
