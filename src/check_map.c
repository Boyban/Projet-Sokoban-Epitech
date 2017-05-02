/*
** check_map.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban/src
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Wed Dec 14 13:02:52 2016 Yohan Lequere
** Last update Wed Dec 14 13:06:16 2016 Yohan Lequere
*/

#include "my.h"

int	check_map(char *str)
{
  int	i;
  int	P;
  int	piece;
  int	caisse;

  P = 0;
  piece = 0;
  caisse = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'P')
	P = P + 1;
      if (str[i] == 'O')
	piece = piece + 1;
      if (str[i] == 'X')
	caisse = caisse + 1;
      i = i + 1;
    }
  if (P != 1 || piece != caisse)
    return (EXIT);
  else
    return (0);
}
