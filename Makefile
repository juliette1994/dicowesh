##
## Makefile for Makefile in /home/qu_j/DicoWesh/qu_j
## 
## Made by QU Juliette
## Login   <qu_j@etna-alternance.net>
## 
## Started on  Fri Oct 16 19:55:59 2015 QU Juliette
## Last update Sat Oct 17 14:11:04 2015 QU Juliette
##

CC	=	gcc

NAME	=	DicoWesh

SRC	= main.c		\
	  my_putstr.c		\
	  my_strcmp.c		\
	  aff_dico_fr.c		\
	  aff_dico_wesh.c	\
	  affichage_commande.c	\
	  ajout_def.c		\
	  bienvenue.c		\
	  dictionnaire.c	\
	  fr_to_wesh.c		\
	  my_putchar.c		\
	  my_swap.c		\
	  readLine.c		\
	  trie_list_wesh.c	\
	  trie_list_fr.c	\
	  wesh_to_fr.c		\
	  ajout_def_text.c	\
	  aide_text.c		\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-W -Werror -Wall -ansi -pedantic

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all