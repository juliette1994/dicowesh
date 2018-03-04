/*
** main.c for main in /home/qu_j/DicoWesh/qu_j
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 17:15:44 2015 QU Juliette
** Last update Sat Oct 17 15:36:44 2015 QU Juliette
*/

#include "juliette.h"

int	main()
{
  my_putstr("\x1b[2J\x1b[1;1H");
  bienvenue();
  my_putstr("\x1b[2J\x1b[1;1H");
  my_putstr("\033[1;31m                                    THE END!\033[0m\n\n");
  return (0);
}
