/*
** juliette.h for juliette.h in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 14:01:33 2015 QU Juliette
** Last update Sat Oct 17 15:08:25 2015 QU Juliette
*/

#ifndef __JULIETTE_H__
#define __JULIETTE_H__

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>

typedef struct	s_mot
{
  char		*wesh;
  char		*fr;
  struct s_mot	*next;
}               t_mot;

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
char	*readLine();
void	bienvenue();
void	affichage_commande(char *commande, t_mot **dico);
t_mot	*dictionnaire();
void	aff_dico_fr(t_mot *dico);
void	aff_dico_wesh(t_mot *dico);
t_mot	*ajout_def(t_mot **dico);
void	wesh_to_fr(t_mot *dico);
void	fr_to_wesh(t_mot *dico);
void	my_swap(char *s1, char *s2);
void	trie_list_wesh(t_mot *dico);
void	trie_list_fr(t_mot *dico);
char	*ajout_def_text(char *wesh);
void	aide_text();

#endif
