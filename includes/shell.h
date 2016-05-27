#ifndef SHELL_H
# define SHELL_H

# define CANCEL ft_putstr("\033[00m")
# define RED ft_putstr("\033[31m")
# define BLUE ft_putstr("\033[34m"); ft_putstr("Shell >> "); CANCEL;
# define CYAN ft_putstr("\033[36m")
# define GREEN ft_putstr("\033[32m"); ft_putstr("Shell >> "); CANCEL;
# define YELLOW ft_putstr("\033[33m")

# include <stdio.h> //a enlever !!!!!!!!!
# include <stdlib.h>
# include <string.h>

# include "../libft/libft.h"
# include "../libft/get_next_line.h"

/* TERMCAP */
# include <termcap.h>
# include <termios.h>
# include <unistd.h>
# include <term.h>
# include <curses.h>


/* OPEN */
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* WRITE */
# include <unistd.h>

//get back parse line
typedef struct			s_parse
{
	char				*line;
	char				*command;
	struct s_parse		*next;
}						t_parse;

int						parseLine(char *str, t_parse *parse);
int 					init_termcaps();
void					ft_loop(char *buf);
void					list_push_back(t_parse **begin_list, char *command, char *line);
t_parse					*create_elem(char *data, char *line);
void					saveLine(char *str);
int 					tgetent(char *bp, const char *name);
void					key();
void					move_cursor_right();
void					move_cursor_left();

#endif
