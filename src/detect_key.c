#include "../includes/shell.h"

char		*ft_init_buffer(char *read_char)
{
	read_char[0] = 0;
	read_char[1] = 0;
	read_char[2] = 0;
	read_char[3] = 0;
	return (read_char);
}

void		ft_loop(char *buf)
{
	// while (1)
	// {
	// 	tputs(tgetstr("ks", NULL), 1, ft_putchar);
	// 	printf(" buf [0] = %c\n", read_char[0]);
	// 	printf(" read [1] = %c\n", read_char[1]);
	// 	printf(" read [2] = %c\n", read_char[2]);
	// 	printf(" read [3] = %c\n", read_char[3]);
	// 	tputs(tgetstr("ke", NULL), 1, ft_putchar);
	// 	if (arg->index == (int)arg->size && (read_char[2] == 'A'
	// 				|| read_char[2] == 'B' || (read_char[2] == '3'
	// 					&& read_char[3] == '~') || read_char[0] == 127
	// 				|| read_char[0] == ' ' || read_char[0] == 10))
	// 	{
	// 		node = ft_loop_keys(arg, node, read_char);
	// 		if ((read_char[3] == '~') || read_char[0] == 127)
	// 			break ;
	// 		else if (read_char[0] == 10)
	// 		{
	// 			ft_return(arg, term);
	// 			return ;
	// 		}
	// 	}
	// 	else if (read_char[0] == 033 || read_char[0] == 4)
	// 		ft_exit_esc(term, read_char, arg);
	// }
	// ft_del_arg(arg, node, term);
}
