# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:19:15 by jsalaber          #+#    #+#              #
#    Updated: 2023/12/15 12:15:44 by jsalaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRCS    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c \
		
OBJS    = $(SRCS:%.c=%.o)
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(OBJS):%.o:%.c
	@cc -c $(CFLAGS) $< -o $@
	
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean 