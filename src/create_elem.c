#include "../includes/shell.h"

t_parse		*create_elem(char *data, char *line)
{
	t_parse		*list;

	list = (t_parse*)malloc(sizeof(t_parse));
	if (list)
	{
		list->command = data;
		list->line = line;
		list->next = NULL;
	}
	return (list);
}