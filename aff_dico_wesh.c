/*
** aff_dico_wesh.c for aff_dico_wesh in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 17:01:32 2015 QU Juliette
** Last update Sat Oct 17 15:24:49 2015 QU Juliette
*/

#include "juliette.h"

void	aff_dico_wesh(t_mot *dico)
{
  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("\nAffichage du dictionnaire sous la forme wesh : fr :\n");
  while (dico)
    {
      my_putstr("                  ");
      my_putstr(dico->wesh);
      my_putstr(" : ");
      my_putstr(dico->fr);
      my_putchar('\n');
      dico = dico->next;
    }
  my_putstr("\n\n");
}
