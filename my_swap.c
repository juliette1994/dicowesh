/*
** my_swap.c for my_swap in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Oct 16 16:56:22 2015 QU Juliette
** Last update Sat Oct 17 09:53:09 2015 QU Juliette
*/

#include "juliette.h"

void	my_swap(char *s1, char *s2)
{
  char	*aide;

  aide = s1;
  s1 = s2;
  s2 = aide;
}
