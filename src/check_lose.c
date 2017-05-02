/*
** check_lose.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Dec 13 18:11:14 2016 Yohan Lequere
** Last update Fri Dec 16 10:34:22 2016 Yohan Lequere
*/

int	count_x(char **tab)
{
  int	i;
  int	j;
  int	count;

  j = 0;
  count = 0;
  while (tab[j] != '\0')
    {
      i = 0;
      while (tab[j][i] != '\0')
	{
	  if (tab[j][i] == 'X')
	    count = count + 1;
	  i = i + 1;
	}
      j = j + 1;
    }
  return (count);
}

int	check_lose(char **tab)
{
  int	a[2];
  int	compt;

  a[0] = 0;
  compt = 0;
  while (tab[a[0]] != '\0')
    {
      a[1] = 0;
      while (tab[a[0]][a[1]] != '\0')
	{
	  if (tab[a[0]][a[1]] == 'X')
	    {
	      if (tab[a[0]][a[1] - 1] == '#' || tab[a[0]][a[1] + 1] == '#')
		if (tab[a[0] + 1][a[1]] == '#' || tab[a[0] - 1][a[1]] == '#')
		  ++compt;
	      if (tab[a[0] + 1][a[1]] == '#' || tab[a[0] - 1][a[1]] == '#')
		if (tab[a[0]][a[1] + 1] == '#' || tab[a[0]][a[1] - 1] == '#')
		  ++compt;
	    }
	  a[1] = a[1] + 1;
	}
      a[0] = a[0] + 1;
    }
  if (compt == count_x(tab))
    return (1);
}
