##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o 
##

SRC	=	my_push_swap.c	\
		action_double.c	\
		action.c	\
		action_for_pb_pa.c	\
		utils/my_putchar.c	\
		utils/my_putstr.c	\
		utils/my_put_nbr.c	\
		utils/my_strlen.c	\
		utils/convert.c	\
		utils/my_strdup.c	\
		utils/my_strcpy.c	\
		utils/check_arg.c	\
		utils/my_int_star.c	\
		utils/my_revstr.c	\
		utils/mem_alloc_2d_int.c

NAME	=	push_swap

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g3 -o $(NAME) main.c $(OBJ) -Wall -Werror

clean:
	rm -rf $(OBJ)
fclean:		clean
	rm -rf $(NAME)

re:	fclean all
