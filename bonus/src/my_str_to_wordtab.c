/*
** my_str_to_wordtab.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Mon Dec 12 15:20:19 2016 Yohan Lequere
** Last update Wed Dec 14 14:06:34 2016 Yohan Lequere
*/

#include <stdlib.h>
#include "my.h"

char	**my_str_to_wordtab(char *str, char **tab)
{
  int	val;
  int	size;
  int	arr[2];

  arr[0] = 0;
  arr[1] = 0;
  size = tall_line(str);
  tab = malloc(sizeof(char**) * my_strlen(str));
  val = 0;
  while (str[arr[0]] != '\0')
    {
      tab[arr[1]] = malloc(sizeof(char*) * size + 1);
      while (str[arr[0]] != '\n')
	{
	  tab[arr[1]][val] = str[arr[0]];
	  val = val + 1;
	  arr[0] = arr[0] + 1;
	}
      tab[arr[1]][val] = '\n';
      tab[arr[1]][val + 1] = '\0';
      arr[0] = arr[0] + 1;
      arr[1] = arr[1] + 1;
      val = 0;
    }
  return (tab);
}
