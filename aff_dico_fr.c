/*
** aff_dico_fr.c for aff_dico_fr in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 17:11:38 2015 QU Juliette
** Last update Sat Oct 17 15:24:37 2015 QU Juliette
*/

#include "juliette.h"

void    aff_dico_fr(t_mot *dico)
{
  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("\nAffichage du dictionnaire sous la forme fr : wesh :\n");
  while (dico)
    {
      my_putstr("                  ");
      my_putstr(dico->fr);
      my_putstr(" : ");
      my_putstr(dico->wesh);
      my_putchar('\n');
      dico = dico->next;
    }
  my_putstr("\n\n");
}
