# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/28 17:55:02 by jalosta-          #+#    #+#              #
#    Updated: 2025/08/04 11:56:35 by jalosta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ		=	$(SRC:.c=.o)

BON_OBJ	=	$(BONUS:.c=.o)

NAME	=	libft.a

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

bonus:		$(BON_OBJ)
			ar rcs $(NAME) $(OBJ) $(BON_OBJ)

all:		$(NAME)

ft_atoi.o:			ft_atoi.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_bzero.o: 		ft_bzero.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_calloc.o: 		ft_calloc.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalnum.o: 		ft_isalnum.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalpha.o: 		ft_isalpha.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isascii.o: 		ft_isascii.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isdigit.o: 		ft_isdigit.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isprint.o: 		ft_isprint.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_itoa.o: 			ft_itoa.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memchr.o: 		ft_memchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcmp.o: 		ft_memcmp.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcpy.o: 		ft_memcpy.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memmove.o: 		ft_memmove.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memset.o:		ft_memset.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_putchar_fd.o: 	ft_putchar_fd.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_putendl_fd.o: 	ft_putendl_fd.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_putnbr_fd.o: 	ft_putnbr_fd.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_putstr_fd.o: 	ft_putstr_fd.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_split.o: 		ft_split.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strchr.o: 		ft_strchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strdup.o: 		ft_strdup.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_striteri.o: 		ft_striteri.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strjoin.o: 		ft_strjoin.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcat.o: 		ft_strlcat.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcpy.o: 		ft_strlcpy.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlen.o: 		ft_strlen.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strmapi.o: 		ft_strmapi.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strncmp.o: 		ft_strncmp.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strnstr.o: 		ft_strnstr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strrchr.o: 		ft_strrchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strtrim.o: 		ft_strtrim.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_substr.o: 		ft_substr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_tolower.o: 		ft_tolower.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_toupper.o: 		ft_toupper.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJ) $(BON_OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		bonus all clean fclean re