# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agusev <agusev@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 22:17:06 by agusev            #+#    #+#              #
#    Updated: 2019/04/29 22:39:54 by agusev           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h

CFILES = 	*.c \
			src/*.c

OFILES = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I$(HEADER) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
			/bin/rm -f $(OFILES)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
