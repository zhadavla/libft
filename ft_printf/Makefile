# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 20:46:48 by vzhadan           #+#    #+#              #
#    Updated: 2023/03/11 16:57:50 by vzhadan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MY_SOURCES = needed_libft/ft_isdigit.c \
	needed_libft/ft_strlen.c \
	needed_libft/ft_strlcpy.c \
	needed_libft/ft_strchr.c \
	needed_libft/ft_strncmp.c \
	bonuses/ft_c_s_p.c \
	bonuses/ft_d_i_u.c \
	bonuses/ft_hex.c \
	bonuses/utils_bonus.c \
	utilits/ft_decimal_to_str.c \
	utilits/ft_init.c \
	utilits/ft_putstr.c \
	utilits/ft_get_num_of_digits.c \
	utilits/ft_flags.c \
	utilits/ft_format.c \
	ft_printf.c
	
MY_HEADER = ft_printf.h
			
MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

.c.o:
	cc $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_SOURCES) $(MY_OBJECTS)

bonus: $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_SOURCES) $(MY_OBJECTS)

all: $(NAME)

clean:
	rm -rf $(MY_OBJECTS)

fclean: clean
	rm -rf $(NAME)

.PHONY: clean fclean re
