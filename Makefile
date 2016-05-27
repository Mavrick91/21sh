# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maducham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/14 15:00:53 by maducham          #+#    #+#              #
#    Updated: 2015/12/09 18:48:02 by maducham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT = 	21sh

FLDR_CLIENT = 	src/

HEAD_CLIENT =	$(addprefix $(FLDR_CLIENT), $(NAME_CLIENT).h)

SRC_CLIENT =	shell.c \
				detect_key.c \
				parseLine.c \
				termcaps.c \
				create_elem.c \
				list_push_back.c \
				saveLine.c \
				key.c \
				move_cursor.c \

SRC_DIR_CLIENT =$(addprefix $(FLDR_CLIENT), $(SRC_CLIENT))

OBJDIR_CLIENT =	$(FLDR_CLIENT)objs

OBJS_CLIENT =	$(addprefix $(OBJDIR_CLIENT)/, $(SRC_CLIENT:.c=.o))

FLAGS = -g

HEADER = includes/shell.h

LIB_FOLD = libft/

all: $(NAME_CLIENT)

$(NAME_CLIENT): $(OBJS_CLIENT)
	make -C $(LIB_FOLD)
	gcc $(FLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT) libft/libft.a -lncurses

$(OBJDIR_CLIENT)/%.o: $(FLDR_CLIENT)/%.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(OBJS_CLIENT):	|$(OBJDIR_CLIENT)

$(OBJDIR_CLIENT):
	mkdir -p $@

clean:
	rm -rf $(OBJS_CLIENT)
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME_CLIENT)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re
