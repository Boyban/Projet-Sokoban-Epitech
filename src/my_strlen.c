/*
** my_strlen.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban_bootstrap
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 14:47:43 2016 Yohan Lequere
** Last update Sun Dec 11 14:48:33 2016 Yohan Lequere
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i - 1);
}
