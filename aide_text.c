/*
** aide_text.c for aide_text in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Sat Oct 17 13:24:49 2015 QU Juliette
** Last update Sat Oct 17 15:30:01 2015 QU Juliette
*/

#include "juliette.h"

void	aide_text()
{
  my_putstr("\n\033[1;31ma\033[0m");
  my_putstr(" : afficher le dictionnaire sous la forme wesh : fr\n");
  my_putstr("\033[1;31mb\033[0m");
  my_putstr(" : afficher le dictionnaire sous la forme fr : wesh\n");
  my_putstr("\033[1;35m1\033[0m");
  my_putstr(" : ajouter une definition\n");
  my_putstr("\033[1;35m2\033[0m");
  my_putstr(" : traduire du wesh au francais\n");
  my_putstr("\033[1;35m3\033[0m");
  my_putstr(" : traduire du francais au wesh\n\n");
  my_putstr("\033[1;36mq\033[0m");
  my_putstr(" : quitter quand vous voudrez, en tapant q\n\n");
  my_putstr("Quelle commande choisissez-vous ? (a, b, 1, 2, 3 ou q)\n");
}
