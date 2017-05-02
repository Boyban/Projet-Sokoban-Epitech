/*
** my_sokoban.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 16:00:48 2016 Yohan Lequere
** Last update Fri Feb 10 08:59:33 2017 Yohan
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include "my.h"

int	person_line(char **tab)
{
  int	i;
  int	j;

  j = 0;
  while (tab[j] != '\0')
    {
      i = 0;
      while (tab[j][i] != '\0')
	{
	  if (tab[j][i] == 'P')
	    return (j);
	  i = i + 1;
	}
      j = j + 1;
    }
}

int	person_col(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[j] != '\0')
    {
      while (tab[j][i] != '\0')
	{
	  if (tab[j][i] == 'P')
	    return (i);
	  i = i + 1;
	}
      j = j + 1;
      i = 0;
    }
  return (1);
}

int	tall_line(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n')
    {
      i = i + 1;
    }
  return (i);
}

char	**direct(int ch, int value_p[2], char **str, char *tab)
{
  if (ch == KEY_UP)
    up(value_p, str);
  else if (ch == KEY_DOWN)
   down(value_p, str);
  else if (ch == KEY_LEFT)
    left(value_p, str);
  else if (ch == KEY_RIGHT)
    right(value_p, str);
  if (ch == 32)
    str = my_str_to_wordtab(tab, str);
  return (str);
}

int    	my_sokoban(char *tab, int count, int value_p[2], int line)
{
  int  	arr[5];
  char 	**str;

  initscr();
  keypad(stdscr, TRUE);
  str = my_str_to_wordtab(tab, str);
  arr[1] = tall_line(str[0]);
  arr[0] = 2;
  while (1)
    {
      arr[3] = 0;
      arr[4] = line / 2;
      value_p[0] = person_line(str);
      value_p[1] = person_col(str);
      str = check_piece(tab, str);
      sokoban_loop(str, arr[3], arr[4], arr[1]);
      if (check_victory(tab, str) == 1)
	arr[2] = all_victory();
      else
	arr[2] = getch();
      if (arr[2] == 27)
	return (1);
      if (arr[2] == 32)
	str = my_str_to_wordtab(tab, str);
      direct(arr[2], value_p, str, tab);
      page();
    }
}
