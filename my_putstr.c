/*
** my_putstr.c for my_putstr in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 14:00:04 2015 QU Juliette
** Last update Thu Oct 15 14:05:28 2015 QU Juliette
*/

#include "juliette.h"

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i = i + 1;
    }
}
