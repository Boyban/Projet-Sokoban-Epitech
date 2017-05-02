/*
** main.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 15:35:46 2016 Yohan Lequere
** Last update Sun Dec 18 16:43:02 2016 Yohan Lequere
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include "my.h"

int	for_alloc(int ac, char **av)
{
  int	fd;
  int	size;
  char	buffer[1];
  int	count;

  size = 1;
  count = 0;
  fd = open(av[ac - 1], O_RDONLY);
  if (fd == -1)
    return (EXIT);
  while (size != 0)
    {
      size = read(fd, buffer, 1);
      count = count + 1;
    }
  close(fd);
  return (count);
}

int	dump_map(int ac, char **av, char *str, int all)
{
  int	fd;
  int	size;
  char	buffer[1];
  int	count;
  int	line;

  size = 1;
  count = 0;
  line = 0;
  fd = open(av[ac - 1], O_RDONLY);
  if (fd == -1)
    return (EXIT);
  while (size != 0)
    {
      size = read(fd, buffer, 1);
      if (buffer[0] == '\n')
	line = line + 1;
      str[count] = buffer[0];
      count = count + 1;
    }
  close(fd);
  return (line);
}

int	help()
{
  my_putstr("USAGE\n");
  my_putstr("\t   ./my_sokoban map\n\n");
  my_putstr("DESCRIPTION\n");
  my_putstr("\t   map\tfile representing the warehouse map, containing '#' ");
  my_putstr("for walls, \n\t\t'P' for the player, ");
  my_putstr("X' for boxes and 'O' for storage locations.\n");
}

char	*back(char *str, int count)
{
  if (str[count - 1] != '\n')
    str[count - 1] = '\n';
  return (str);
}

int	main(int ac, char **av)
{
  char	*str;
  int	count;
  int	value_p[2];
  char	**tab;
  int	line;
  int	ret;

  if (ac != 2)
    return (EXIT);
  if (av[1][0] == '-' && av[1][1] == 'h')
    {
      help();
      return (0);
    }
  count = for_alloc(ac, av);
  if (count == EXIT)
    return (EXIT);
  str = malloc(sizeof(char *) * count + 1);
  line = dump_map(ac, av, str, count);
  str = back(str, count);
  if (check_map(str) == EXIT)
    return (EXIT);
  ret = my_sokoban(str, count, value_p, line);
  endwin();
  return (ret);
}
