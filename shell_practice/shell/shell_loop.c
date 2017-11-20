#include "shell.h"

void shell_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("$ ");
		line = shell_getline();
		args = shell_split_line(line);
		status = shell_execute(args);

		free(line);
		free(args);
	} while (status);
}
