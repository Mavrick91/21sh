#include "../includes/shell.h"

void			separate_command(t_parse *parse, char *line)
{
	int			i;
	int			j;
	char		*command;

	i = 0;
	j = 0;
	command = (char*)malloc(sizeof(char) * ft_strlen(line));
	while (line[i])
	{
		command[j] = line[i];
		j++; 
		i++;
		if (line[i] == ';' || line[i] == '\n')
		{
			list_push_back(&parse, command, line);
			ft_memset(command, 0, ft_strlen(line));
			i++;
			j = 0;
		}
	}
	free(command);
}

int		parseLine(char *str, t_parse *parse)
{
	int 	len;
	int		i;
	char	*line;

	i = 0;
	len = ft_strlen(str);
	line = (char*)malloc(sizeof(char) * len + 1);
	while (str[i])
	{
		line[i] = str[i];
		i++;
	}
	separate_command(parse, line);
	return (1);
}
