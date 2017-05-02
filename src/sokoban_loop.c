/*
** sokoban_loop.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Dec 13 19:46:31 2016 Yohan Lequere
** Last update Tue Dec 13 21:03:18 2016 Yohan Lequere
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include "my.h"

int	page()
{
  clear();
  refresh();
}

int	sokoban_loop(char **str, int i, int add, int sous)
{
  while (str[i] != '\0')
    {
      mvprintw((LINES/2) - add, (COLS/2) - (sous/2), str[i]);
      i = i + 1;
      add = add - 1;
    }
}
