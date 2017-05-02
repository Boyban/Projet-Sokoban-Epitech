/*
** key.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 18:47:53 2016 Yohan Lequere
** Last update Tue Dec 20 11:41:32 2016 Yohan Lequere
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include "my.h"

int     up(int p[2], char **str)
{
  if (str[p[0] - 1][p[1]] == '#')
    return (0);
  up_suit(p, str);
}

int     down(int p[2], char **str)
{
  if (str[p[0] + 1][p[1]] == '#')
    return (0);
  down_suit(p, str);
}

int     left(int p[2], char **str)
{
  if (str[p[0]][p[1] - 1] == '#')
    return (0);
  left_suit(p, str);
}

int     right(int p[2], char **str)
{
  if (str[p[0]][p[1] + 1] == '#')
    return (0);
  right_suit(p, str);
}
