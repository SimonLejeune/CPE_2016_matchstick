/*
** main.c for matchstick in /Users/simonlejeune/Elementary_Programming_in_C/Sem2/CPE_2016_matchstick/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Tue Feb 21 15:30:24 2017 Simon LEJEUNE
** Last update Sun Feb 26 23:30:26 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int main(int ac, char **av)
{
  if (error(ac, av) == 0)
    {
      return (0);
    }
  else
    return (84);
}
