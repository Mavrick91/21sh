#include "../includes/shell.h"

char	*concat(char *dest, char *src)
{
	char	*final;
	int		i;

	i = 0;
	final = malloc(sizeof(char) * (ft_strlen(dest) + 2));
	if (final != "" || dest == "")
		return (src);
	while (dest[i] != '\0')
	{
		final[i] = dest[i];
		i++;
	}
	final[i] = src[0];
	final[i + 1] = '\0';
	return (final);
}

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
	char	buf[3];
	char	*complete_line;
	char	*test;

	// while (42)
	// {
	// 	read(0, buf, 3);
	// 	// printf("buf[0] = %d\n", (int)buf[0]);
	// 	// printf("buf[1] = %d\n", (int)buf[1]);
	// 	// printf("buf[2] = %d\n", (int)buf[2]);
	// 	// printf("str = %s", buf);
	// 	test = concat(complete_line, buf);
	// 	complete_line = test;
	if ((int)buf[0] == 27)
		which_arrow(buf);
	else if ((int)buf[0] == 10 && (int)buf[1] == 0)
		valid_line(complete_line);
	else
	{

	}
	// }
}