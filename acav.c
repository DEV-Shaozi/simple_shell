#include <stdio.h>

/*
 * main - argument of a value
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("The %d argument %s\n", i, av[i]);
		i++;
	}
		return (0);
}
