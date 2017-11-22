#include "shell.h"

void search_path(void)
{
	char *path;
	char *temp[];

	int i;

	for (i = 0; environ[i] != '\0'; i++)
	{
		if (_strncmp("PATH=", environ[i], 5) == 0)
		{
			path = _strcpy(temp, environ[i]);
			path += 5;
			return (path);
		}
		else
			return (1);
	}
}
