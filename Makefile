# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchotel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:15:39 by jchotel           #+#    #+#              #
#    Updated: 2020/01/23 11:27:51 by jchotel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSC		= 	libft/ft_atoi.c\
				libft/ft_bzero.c\
				libft/ft_isdigit.c\
				libft/ft_strchr.c\
				libft/ft_strlen.c\
				libft/ft_strdup.c\
				srcs/ft_put.c\
				srcs/ft_put2.c\
				srcs/ft_printf.c\
				srcs/handler_arg.c\
				srcs/handler_buff.c\
				srcs/handler_c.c\
				srcs/handler_diu.c\
				srcs/handler_o.c\
				srcs/handler_px.c\
				srcs/handler_s.c\
				srcs/utils.c\
				srcs/ft_strjoin_c.c
SRCSH		= includes/printf.h
OBJS		= $(SRCSC:%.c=%.o)
NAME		= libftprintf.a
CC			= gcc
AR			= ar rc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o: ${OBJS}
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			@echo "\033[1;32m"
			@echo "┌─┐┬ ┬┌─┐┌─┐┌─┐┌─┐┌─┐"
			@echo "└─┐│ ││  │  ├┤ └─┐└─┐"
			@echo "└─┘└─┘└─┘└─┘└─┘└─┘└─┘"
			@echo "libftprintf.a generated successfully.\033[0;0m"
			@${AR} ${NAME} ${OBJS} ${SRCSH}

all:		${NAME}

bonus:		${NAME}

test-a:		all
			@${CC} -g -fsanitize=address ${NAME} ${LIBFT} ../testers/main.c -o printf
			@make clean
			@./printf a

test:		all
			${CC} ${NAME} ${CFLAGS} ${LIBFT} ../testers/main.c -o printf
			@make clean
			@./printf

clean:
			@echo "Deleting .o files.."
			@${RM} ${OBJS}

fclean:		clean
			@echo "Deleting binary files.."
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re