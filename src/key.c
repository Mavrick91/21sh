#include "../includes/shell.h"

void	which_arrow(char *buf)
{
	if (buf[1] == 91 && buf[2] == 65) //haut
	{
		printf("fleche haut\n");
	}
	if (buf[1] == 91 && buf[2] == 67) //Droite
	{
		printf("fleche droite\n");
	}
	if (buf[1] == 91 && buf[2] == 66) //bas
	{
		printf("fleche bas\n");
	}
	if (buf[1] == 91 && buf[2] == 68) //gauche
	{
		printf("fleche gauche\n");
	}
	if (buf[1] == 0) //echap
	{
		exit (1);
	}
}

void	valid_line(char *str)
{
	printf("complete_line = %s\n", str);
}

void	key()
{
	int		ret;
	char	order[BUF_SIZE + 1];

	ft_bzero(order, BUF_SIZE + 1);
	while ((ret = read(0, order, BUF_SIZE)))
	{
		order[ret] = '\0';
		ft_bzero(order, BUF_SIZE + 1);
	}
	// if ((int)buf[0] == 27)
	// 	which_arrow(buf);
	// else if ((int)buf[0] == 10 && (int)buf[1] == 0)
	// 	valid_line(complete_line);
	// else
	// {

	// }
	// }
}