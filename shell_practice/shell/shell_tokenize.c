#include "shell.h"
#define DELIM " \t\r\n\a"
#define BUFSIZE 64

char **shell_split(char *line)
{
	char **tokens;
	char *token;
	int position = 0;

	tokens = malloc(sizeof(char *) * BUFSIZE);

	if (tokens == NULL)
	{
		printf("Error");
		return (NULL);
	}

	token = strtok(line, DELIM);
	while (token != NULL)
	{
		token[position] = token;
		token = strtok(NULL, DELIM);
		position++;
	}
	token[position] = NULL;
	return (tokens);
}
