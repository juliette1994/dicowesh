/*
** ajout_def.c for ajout_def in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 18:51:25 2015 QU Juliette
** Last update Sat Oct 17 15:29:48 2015 QU Juliette
*/

#include "juliette.h"

t_mot	*ajout_def(t_mot **dico)
{
  char	*wesh;
  char	*fr;
  t_mot	*tmp;
  t_mot	*aide;

  wesh = NULL;
  aide = malloc(sizeof(t_mot));
  aide = *dico;
  tmp = malloc(sizeof(t_mot));
  wesh = ajout_def_text(wesh);
  my_putstr("Saisissez votre mot francais.\n");
  fr = readLine();
  while (aide != NULL)
    {
      if (my_strcmp(aide->wesh, wesh) == 0)
	{
	  aide->fr = fr;
	  return (*dico);
	}
      aide = aide->next;
    }
  tmp->wesh = wesh;
  tmp->fr = fr;
  tmp->next = *dico;
  free(aide);
  return (tmp);
}
