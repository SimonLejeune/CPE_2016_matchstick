/*
** error.c for matchstick in /Users/simonlejeune/Elementary_Programming_in_C/Sem2/CPE_2016_matchstick/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Wed Feb 22 13:19:31 2017 Simon LEJEUNE
** Last update Wed Feb 22 13:55:50 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include "../include/my.h"

int	error(int ac, char **av)
{
  int	line;
  int	match;

  if (ac != 3)
    {
      write(2, "Need two arguments\n", 19);
      return (84);
    }
  line = my_getnbr(av[1]);
  match = my_getnbr(av[2]);
  if (line <= 0 || line >= 101)
    {
      write(2, "Matchstick line must be between 1 and 100\n", 43);
      return (84);
    }
  else if (match <= 0)
    {
      write(2, "Matches must be better than 0\n", 31);
      return (84);
    }
  return (0);
}
