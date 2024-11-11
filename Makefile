# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 09:31:45 by kkoujan           #+#    #+#              #
#    Updated: 2024/11/09 14:06:11 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o \
		ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
		ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
		ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o \
		ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o \
		ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o \
		ft_tolower.o ft_toupper.o

		
BONUS_OBJ = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o \
			ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o

CC = cc 
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $^

bonus : $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

%.o : %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
