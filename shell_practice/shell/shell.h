#ifndef SHELL_H
#define SHELL_H

#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

int _strlen(char *s);
char *shell_getline(void);
void shell_loop(int argc, char *argv[]);
char **shell_split(char *line);
int shell_launch(char **args);
int shell_exit(void);
int shell_env(void);
int _strcmp(char *s1, char *s2);

typedef struct builtin
{
	char *command;
	int (*function)(char **);
} built;

#endif
