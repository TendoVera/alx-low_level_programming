#include "pid.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point.
 * Return: 0.
 */
int main(void)
{
	pid_t pid = getpid();
	pid_t parent_pid = getppid();

	printf("Current process PID: %d\n", pid);
	printf("Parent process PID: %d\n", parent_pid);

	return (0);
}
