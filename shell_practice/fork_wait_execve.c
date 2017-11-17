#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - a program that executes the command ls -l /tmp in 5
 * different child processes
 *
 * Return: void
 */
int main(void)
{
pid_t mom_pid;
int i;
pid_t *child_pid;
int status;
char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

if (execve(argv[0], argv, NULL) == -1)
{
	perror("Error:");
}
for (i = 0; i < 5; i++)
{
	child_pid[i] = fork();
	mom_pid = getpid();
	printf("After fork\n");
	printf("child_pid%d is %u\n", i, child_pid[i]);
	if (child_pid[i] == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid[i] == 0)
	{
		printf("I'm waiting a bit\n");
		sleep(3);
	} else
	{
		wait(&status);
	}
} return (0);
}
