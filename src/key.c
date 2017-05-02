/*
** key.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 18:47:53 2016 Yohan Lequere
** Last update Sun Dec 18 16:39:42 2016 Yohan Lequere
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include "my.h"

int     up(int p[2], char **str, int piece)
{
  if (str[p[0] - 1][p[1]] == '#')
    return (piece);
  piece = up_suit(p, str, piece);
}

int     down(int p[2], char **str, int piece)
{
  if (str[p[0] + 1][p[1]] == '#')
    return (piece);
  piece = down_suit(p, str, piece);
 }

int     left(int p[2], char **str, int piece)
{
  if (str[p[0]][p[1] - 1] == '#')
    return (piece);
  piece = left_suit(p, str, piece);
}

int     right(int p[2], char **str, int piece)
{
  if (str[p[0]][p[1] + 1] == '#')
    return (piece);
  piece = right_suit(p, str, piece);
}
