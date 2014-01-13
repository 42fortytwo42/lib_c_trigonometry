#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/01/13 19:48:00 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libtrigonometry.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libtrigonometry.h

SRC =	add_in_cosinus.c \
		add_in_sinus.c \
		add_in_tan.c \
		circle_find_cosinus_angle.c \
		circle_find_sinus_angle.c \
		define_cosinus_angle.c \
		define_sinus_angle.c \
		define_tan_by_angle.c \
		define_tan_by_side.c \
		find_adjacent_side_with_angle_by_hypotenuse_cosinus.c \
		find_hypotenuse_with_angle_by_cosinus.c \
		find_hypotenuse_with_angle_by_sinus.c \
		find_opposite_side_with_angle_by_hypotenuse_sinus.c \
		minus_in_cosinus.c \
		minus_in_sinus.c \
		minus_in_tan.c \
		pythagore_this_rooted.c \
		pythagore_this_squared.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBCOLOR --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie trigonometry.a
		@echo -----------------------------
		@echo --- Compilation en cours ----
		$(CC) $(CFLAGS) $(SRC)
		@echo --- Compilation terminee ----
		@echo -----------------------------
		@echo --- Creation librairie ------
		$(AR) $(NAME) $(OBJ) $(HEADER)
		@echo --- librairie disponible ----
		@echo -----------------------------
		@echo indexation de la librairie en cours
		@echo -----------------------------
		$(RANLIB) $(NAME)
		@echo -----------------------------
		@echo indexation de la librairie effectue
		@echo -----------------------------
		@echo Conception librairie libtrigonometry.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
