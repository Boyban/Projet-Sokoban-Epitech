/*
** nb_lines.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Tue Dec 13 09:09:13 2016 Yohan Lequere
** Last update Tue Dec 13 09:24:32 2016 Yohan Lequere
*/

int	nb_lines(char **tab)
{
  int	i;

  while (tab[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
