#include "../includes/shell.h"

void	list_push_back(t_parse **begin_list, char *command, char *line)
{
	t_parse	*list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = create_elem(command, line);
	}
	else
	{		
		*begin_list = create_elem(command, line);
	}
}
