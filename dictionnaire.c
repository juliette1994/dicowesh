/*
** dictionnaire.c for dictionnaire in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 14:34:57 2015 QU Juliette
** Last update Fri Oct 16 18:04:20 2015 QU Juliette
*/

#include "juliette.h"

t_mot	*dictionnaire()
{
  t_mot	*dico;

  dico = malloc(sizeof(t_mot));
  dico->wesh = "walou";
  dico->fr = "rien";
  dico->next = NULL;
  return (dico);
}
