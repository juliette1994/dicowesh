/*
** bienvuenue.c for bienvenue in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 11:00:31 2015 QU Juliette
** Last update Sat Oct 17 15:26:50 2015 QU Juliette
*/

#include "juliette.h"

void	bienvenue()
{
  t_mot *dico;
  char	*commande;

  dico = dictionnaire();
  my_putstr("\n \033[1;34m            Bienvenue sur le DicoWesh !\033[0m\n\n");
  my_putstr("\033[1;31ma\033[0m");
  my_putstr(" : afficher le dictionnaire sous la forme wesh : fr\n");
  my_putstr("\033[1;31mb\033[0m");
  my_putstr(" : afficher le dictionnaire sous la forme fr : wesh\n");
  my_putstr("\033[1;35m1\033[0m");
  my_putstr(" : ajouter une definition\n");
  my_putstr("\033[1;35m2\033[0m");
  my_putstr(" : traduire du wesh au francais\n");
  my_putstr("\033[1;35m3\033[0m");
  my_putstr(" : traduire du francais au wesh\n\n");
  my_putstr("Quelle commande choisissez-vous ? (a, b, 1, 2 ou 3)\n");
  commande = readLine();
  my_putstr("\x1b[2J\x1b[1;1H");
  while (my_strcmp("q", commande) != 0)
    {
      affichage_commande(commande, &dico);
      aide_text();
      commande = readLine();
    }
  free(dico);
}
