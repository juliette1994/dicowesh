/*
** affichage_commande.c for affichage_commande in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 13:43:52 2015 QU Juliette
** Last update Sat Oct 17 15:25:24 2015 QU Juliette
*/

#include "juliette.h"

void	affichage_commande(char *commande, t_mot **dico)
{
  my_putstr("\x1b[2J\x1b[1;1H");
  if ((my_strcmp("a", commande) == 0) && (my_strcmp("q", commande) != 0)) 
    trie_list_wesh(*dico);
  else if ((my_strcmp("b", commande) == 0) && (my_strcmp("q", commande) != 0))
    trie_list_fr(*dico);
  else if ((my_strcmp("1", commande) == 0) && (my_strcmp("q", commande) != 0))
    *dico = ajout_def(dico);
  else if ((my_strcmp("2", commande) == 0) && (my_strcmp("q", commande) != 0))
    wesh_to_fr(*dico);
  else if ((my_strcmp("3", commande) == 0) && (my_strcmp("q", commande) != 0))
    fr_to_wesh(*dico);
  else
    {
      my_putstr("\nVous n'avez pas saisi la bonne commande.\n\n");
      my_putstr("\033[1;31m                   RECOMMENCEZ!\033[0m\n\n");
    }
}
