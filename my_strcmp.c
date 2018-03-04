/*
** my_strcmp.c for my_strcmp in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 13:57:47 2015 QU Juliette
** Last update Fri Oct 16 10:43:25 2015 QU Juliette
*/

#include "juliette.h"

int     my_strcmp(char *s1, char *s2)
{
  int   i;
  int   a;

  a = 0;
  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
        return (1);
      else if (s1[i] < s2[i])
        return (-1);
      i = i + 1;
    }
  return (a);
}
