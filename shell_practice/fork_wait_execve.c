#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "holberton.h"

/**
 * fork_wait_execve - a program that forks a new process, waits the shell
 * and executes new program in forked process
 *
 * Return: an integer status
 */
int fork_wait_execve(char *argv[])
{
pid_t parent_pid;
pid_t wait_pid;
int status;

parent_pid = fork();
if (parent_pid == 0)
{
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("fork_wait_execve");
		return (-1);
	}
	else if (parent_pid == -1)
	{
		perror("fork_wait_execve");
		return (-1);
	}
	else
	{
		sleep(3);
		wait_pid = wait(&status);
	}
} return (status);
}
