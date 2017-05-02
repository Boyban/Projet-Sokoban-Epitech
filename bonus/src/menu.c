/*
** menu.c for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban/bonus/src
** 
** Made by Yohan Lequere
** Login   <Yohan@epitech.net>
** 
** Started on  Thu Dec 15 16:06:19 2016 Yohan Lequere
** Last update Tue Feb 14 19:05:48 2017 Yohan
*/

#include <ncurses.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

int	menu()
{
  int	       	ch;
  sfMusic*	music;

  initscr();
  keypad(stdscr, TRUE);
  start_color();
  assume_default_colors(COLOR_RED, COLOR_WHITE);
  init_pair(1, COLOR_BLACK, COLOR_WHITE);
  ch = 0;
  music = sfMusic_createFromFile("Musique.ogg");
  sfMusic_play(music);
  sfMusic_setVolume (music, 50);
  while (ch != 32)
    {
      clear();
      attron(COLOR_PAIR(1));
      printw("In development...");
      mvprintw((LINES/2) - ((LINES/2) / 2), (COLS/2) - (32/2)
	       , "WELCOME IN SOKOBAN DEMONIAC GAME");
      mvprintw((LINES/2) + ((LINES/2)/2), (COLS/2) - (28/2)
	       , "PRESS SPACE TO ENTER IN HELL");
      mvprintw(LINES - 1, 1, "Copyright at 2016-2017");
      refresh();
      ch = getch();
    }
}
