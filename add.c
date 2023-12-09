#include <stdio.h>
#include <unistd.h>

/**
 * main - process id that sum a value
 *
 * Return: 0
 */
int main(void)
{
	int x = 5;
	int y = 6;
	int sum = x + y;
	pid_t pid;

	pid = getpid();

	printf("sum is %d\n", sum);
	printf("pid is %d\n", pid);

	return (0);
}
