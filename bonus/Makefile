##
## Makefile for  in /home/Yohan/Unix System Programmation/PSU_2016_my_sokoban
## 
## Made by Yohan Lequere
## Login   <Yohan@epitech.net>
## 
## Started on  Sun Dec 11 18:50:12 2016 Yohan Lequere
## Last update Thu Dec 15 18:50:41 2016 Yohan Lequere
##

NAME	=	my_sokoban

SRC	=	./src/main.c			\
		./src/my_putstr.c		\
		./src/my_sokoban.c		\
		./src/key.c			\
		./src/check_lose.c		\
		./src/check_victory.c		\
		./src/my_str_to_wordtab.c	\
		./src/my_strlen.c		\
		./src/nb_lines.c		\
		./src/suit_key.c		\
		./src/sokoban_loop.c		\
		./src/check_map.c		\
		./src/menu.c			\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): 	$(SRC)
	gcc -I ./include $(SRC) -lncurses -lc_graph_prog -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	clean fclean
	gcc -I ./include $(SRC) -lncurses -o $(NAME)

.PHONY:	clean fclean re all
