#include "shell.h"

void path_token(char *path)
{
	char **dirs;
	int i = 0;
	path = strtok(path, ":");

	dirs = malloc(sizeof(char *) * BUFFER_SIZE);

	while (path)
	{
		dirs[i] = path;
		i++;
		path = strtok(NULL, ":");
	}
	dirs[i] = NULL;
}
