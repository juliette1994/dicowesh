/*
** ajout_def_text.c for ajout_def_text in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Sat Oct 17 12:41:51 2015 QU Juliette
** Last update Sat Oct 17 15:26:27 2015 QU Juliette
*/

#include "juliette.h"

char	*ajout_def_text(char *wesh)
{
  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("Quelle definition voulez-vous ajouter a votre dico ?\n");
  my_putstr("Saisissez votre mot wesh.\n");
  wesh = readLine();
  return (wesh);
}
