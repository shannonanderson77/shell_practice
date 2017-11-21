#include <stdio.h>
#include <string.h>

int main()
{
	char *str;
	char *buffer;

	buffer = strtok(str, " ");
	while (buffer != NULL)
	{
		printf("%s", buffer);
		buffer = strtok(NULL, " ");
	}
	return (0);
}
