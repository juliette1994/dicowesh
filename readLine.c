/*
** readLine.c for readLine in /home/qu_j/DicoWesh
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Thu Oct 15 13:56:45 2015 QU Juliette
** Last update Sat Oct 17 15:11:19 2015 QU Juliette
*/

#include "juliette.h"

char    *readLine()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
