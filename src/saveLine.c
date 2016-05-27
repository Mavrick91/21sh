#include "../includes/shell.h"

void		saveLine(char *str)
{
	int		fd;

	fd = open("historique.txt", O_RDWR | O_CREAT | O_APPEND, 00666);
	write(fd, str, ft_strlen(str));
}