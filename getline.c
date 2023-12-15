#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input = NULL;
	size_t lenght = 0;
	ssize_t numberRead;

	while (1)
	{
		printf("$ ");
		numberRead = getline(&input, &lenght, stdin);
		if (numberRead == -1)
		{
			printf("The program is closed\n");
			free(input);
			return (-1);
		}
		printf("My input is %s", input);
	}
	printf("The program is closing"); 
	free(input);
	return (0);
}
