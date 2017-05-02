/*
** suit_key.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Dec 13 17:38:35 2016 Yohan Lequere
** Last update Sun Dec 18 16:22:53 2016 Yohan Lequere
*/

#include "my.h"

int	up_suit(int p[2], char **str, int piece)
{
  if (str[p[0] - 1][p[1]] == 'X' && str[p[0] - 2][p[1]] != '#')
    {
      if (str[p[0] - 2][p[1]] != 'X')
	{
	  str[p[0]][p[1]] = 32;
	  str[p[0] - 1][p[1]] = 'P';
	  str[p[0] - 2][p[1]] = 'X';
	}
    }
  else if (str[p[0] - 1][p[1]] == 'O')
    {
      str[p[0]][p[1]] = 32;
      str[p[0] - 1][p[1]] = 'P';
      return (1);
    }
  else if (str[p[0] - 1][p[1]] != '#' && str[p[0] - 1][p[1]] != 'X')
    {
      str[p[0]][p[1]] = 32;
      str[p[0] - 1][p[1]] = 'P';
    }
}

int	down_suit(int p[2], char **str, int piece)
{
  if (str[p[0] + 1][p[1]] == 'X' && str[p[0] + 2][p[1]] != '#')
    {
      if (str[p[0] + 2][p[1]] != 'X')
	{
	  str[p[0]][p[1]] = 32;
	  str[p[0] + 1][p[1]] = 'P';
	  str[p[0] + 2][p[1]] = 'X';
	}
    }
  else if (str[p[0] + 1][p[1]] == 'O')
    {
      str[p[0]][p[1]] = 32;
      str[p[0] + 1][p[1]] = 'P';
      return (1);
    }
  else if (str[p[0] + 1][p[1]] != '#' && str[p[0] + 1][p[1]] != 'X')
    {
      str[p[0]][p[1]] = 32;
      str[p[0] + 1][p[1]] = 'P';
    }
}

int	left_suit(int p[2], char **str, int piece)
{
  if (str[p[0]][p[1] - 1] == 'X' && str[p[0]][p[1] - 2] != '#')
    {
      if (str[p[0]][p[1] - 2] != 'X')
	{
	  str[p[0]][p[1]] = 32;
	  str[p[0]][p[1] - 1] = 'P';
	  str[p[0]][p[1] - 2] = 'X';
	}
    }
  else if (str[p[0]][p[1] - 1] == 'O')
    {
      str[p[0]][p[1]] = 32;
      str[p[0]][p[1] - 1] = 'P';
      return (1);
    }
  else if (str[p[0]][p[1] - 1] != '#' && str[p[0]][p[1] - 1] != 'X')
    {
      str[p[0]][p[1]] = 32;
      str[p[0]][p[1] - 1] = 'P';
    }
}

int	right_suit(int p[2], char **str, int piece)
{
  if (str[p[0]][p[1] + 1] == 'X' && str[p[0]][p[1] + 2] != '#')
    {
      if (str[p[0]][p[1] + 2] != 'X')
	{
	  str[p[0]][p[1]] = 32;
	  str[p[0]][p[1] + 1] = 'P';
	  str[p[0]][p[1] + 2] = 'X';
	}
    }
  else if (str[p[0]][p[1] + 1] == 'O')
    {
      str[p[0]][p[1]] = 32;
      str[p[0]][p[1] + 1] = 'P';
      return (1);
    }
  else if (str[p[0]][p[1] + 1] != '#' && str[p[0]][p[1] + 1] != 'X')
    {
      str[p[0]][p[1]] = 32;
      str[p[0]][p[1] + 1] = 'P';
    }
}
