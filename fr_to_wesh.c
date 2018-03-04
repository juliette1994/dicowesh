/*
** fr_to_wesh.c for fr_to_wesh in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 19:39:16 2015 QU Juliette
** Last update Sat Oct 17 15:27:11 2015 QU Juliette
*/

#include "juliette.h"

void     fr_to_wesh(t_mot *dico)
{
  char  *commande;
  
  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("\nQuel mot francais voulez-vous traduire en wesh ?\n");
  commande = readLine();
  while (dico && (my_strcmp("q", commande) != 0))
    {
      if (my_strcmp(dico->fr, commande) == 0)
        {
	  my_putstr("          ");
          my_putstr(dico->fr);
          my_putstr(" signifie en wesh ");
          my_putstr(dico->wesh);
          my_putstr(".\n\n");
        }
      else if (my_strcmp(dico->fr, commande) != 0)
	{
	  my_putstr("\nCe mot n'est pas dans ce dictionnaire.\n\n");
	  my_putstr("\033[1;35m                      SORRY!\033[0m\n\n");
	}
      dico = dico->next;
    }
}
