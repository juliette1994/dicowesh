/*
** wesh_to_fr.c for wesh_to_fr in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 19:27:04 2015 QU Juliette
** Last update Sat Oct 17 15:27:45 2015 QU Juliette
*/

#include "juliette.h"

void	wesh_to_fr(t_mot *dico)
{
  char  *commande;

  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("\nQuel mot wesh voulez-vous traduire en francais ?\n");
  commande = readLine();
  while (dico && (my_strcmp("q", commande) != 0))
    {
      if (my_strcmp(dico->wesh, commande) == 0)
	{
	  my_putstr("          ");
	  my_putstr(dico->wesh);
	  my_putstr(" signifie en francais ");
	  my_putstr(dico->fr);
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
