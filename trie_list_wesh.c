/*
** trie_list_wesh.c for trie_list_wesh in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Sat Oct 17 09:25:01 2015 QU Juliette
** Last update Sat Oct 17 10:51:40 2015 QU Juliette
*/

#include "juliette.h"

void    trie_list_wesh(t_mot *dico)
{
  t_mot *tmp;
  int   ok;

  ok = 1;
  while (ok == 1)
    {
      ok = 0;
      tmp = dico;
      while (tmp->next != NULL)
        {
          if (my_strcmp(tmp->wesh, tmp->next->wesh) == 1)
            {
              my_swap(tmp->wesh, tmp->next->wesh);
              my_swap(tmp->fr, tmp->next->fr);
              ok = 1;
            }
          tmp = tmp->next;
        }
    }
  aff_dico_wesh(dico);
}
