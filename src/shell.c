#include "../includes/shell.h"

void	ft_erreur(char *str)
{
	ft_putstr("Erreur : ");
	ft_putstr(str);
	ft_putstr("\n");
	exit(-1);
}

int 	init_termcaps()
{
	char           	*name_term;
	struct termios 	term;
	int 			sucess;

	if ((name_term = getenv("TERM")) == NULL)
		ft_erreur("Specify a terminal with 'setenv TERM'");
	if ((sucess = tgetent(NULL, name_term)) == ERR)
	{
		if (sucess < 0)
			ft_putendl_fd("Can't access to termcaps database", 2);
		if (sucess == 0)
			ft_putendl_fd("Terminal Type not defined", 2);
		exit(0);
	}
	if (tcgetattr(0, &term) == -1)
		ft_erreur("tcgetattr");
	term.c_lflag = term.c_lflag & (~ICANON & ~ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSADRAIN, &term))
		return (-1);
	return (0);
}

void	fix_termcaps()
{
}

void	affiche_prompt(char **env)
{
	char	*buf;
	int		ret;
	t_parse	*parse;

	parse = NULL;
	buf = (char*)malloc(sizeof(char));
	GREEN;
	while (42)
	{
		key();
		GREEN;
	}
	if (ret == 0)
		ft_putstr("exit\n");
}

int main(int argc, char **argv, char **env)
{
	init_termcaps();
	affiche_prompt(env);
	return (0);
}
