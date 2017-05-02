/*
** check_victory.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Dec 13 17:59:49 2016 Yohan Lequere
** Last update Sun Dec 18 16:41:42 2016 Yohan Lequere
*/

#include "my.h"

char	**check_piece(char *str, char **tab)
{
  char	**comp;
  int	a[2];

  comp = my_str_to_wordtab(str, comp);
  a[0] = 0;
  while (comp[a[0]] != '\0')
    {
      a[1] = 0;
      while (comp[a[0]][a[1]] != '\0')
	{
	  if (comp[a[0]][a[1]] == 'O' && tab[a[0]][a[1]] == 32)
	    tab[a[0]][a[1]] = 'O';
	  a[1] = a[1] + 1;
	}
      a[0] = a[0] + 1;
    }
  return (tab);
}

int	check_victory(char *str, char **tab)
{
  char	**comp;
  int	a[2];

  comp = my_str_to_wordtab(str, comp);
  a[0] = 0;
  while (comp[a[0]] != '\0')
    {
      a[1] = 0;
      while (comp[a[0]][a[1]] != '\0')
	{
	  if (comp[a[0]][a[1]] == 'O' && tab[a[0]][a[1]] != 'X')
	    return (0);
	  a[1] = a[1] + 1;
	}
      a[0] = a[0] + 1;
    }
  return (1);
}
