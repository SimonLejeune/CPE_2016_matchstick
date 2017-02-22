/*
** functions.c for matchstick in /Users/simonlejeune/Elementary_Programming_in_C/Sem2/CPE_2016_matchstick/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Tue Feb 21 15:29:53 2017 Simon LEJEUNE
** Last update Wed Feb 22 13:59:53 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb > 0)
    my_putnbr(nb / 10);
  my_putchar('0' + nb % 10);
}

int	my_getnbr(char *str)
{
  int	result;
  int	i;
  int	sign;

  result = 0;
  i = 0;
  sign = 0;
  while (str[i] == '-')
    {
      sign++;
      i++;
    }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      result = result * 10 + str[i] - 48;
      i++;
    }
  if ((sign % 2) != 0)
    result = result * -1;
  return (result);
}
