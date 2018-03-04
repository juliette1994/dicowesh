/*
** my_putchar.c for my_putchar in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 13:59:15 2015 QU Juliette
** Last update Sat Oct 17 15:09:49 2015 QU Juliette
*/

#include "juliette.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}
