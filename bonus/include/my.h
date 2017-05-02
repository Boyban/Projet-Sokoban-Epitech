/*
** my.h for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban/include
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Sun Dec 11 18:49:49 2016 Yohan Lequere
** Last update Tue Dec 20 11:40:40 2016 Yohan Lequere
*/

#ifndef MY_H_

# define MY_H_
# define EXIT	84

int     for_alloc(int ac, char **av);
int     dump_map(int ac, char **av, char *str, int all);
int     check_lose(char **tab);
int     check_victory(char *str, char **tab);
int     up(int p[2], char **str);
int     down(int p[2], char **str);
int     left(int p[2], char **str);
int     right(int p[2], char **str);
int     my_putstr(char *str);
void    my_putchar(char c);
int     person_line(char **tab);
int     person_col(char **tab);
int     tall_line(char *str);
char	**direct(int ch, int value_p[2], char **str, char *tab);
int     my_sokoban(char *tab, int count, int value_p[2], int line);
int     my_strlen(char *str);
char    **my_str_to_wordtab(char *str, char **tab);
int     nb_lines(char **tab);
int     sokoban_loop(char **str, int i, int add, int sous);
int     page();
int     up_suit(int p[2], char **str);
int     down_suit(int p[2], char **str);
int     left_suit(int p[2], char **str);
int     right_suit(int p[2], char **str);
int	check_map(char *str);
char    **check_piece(char *str, char **tab);

#endif /* !MY_H_ */
