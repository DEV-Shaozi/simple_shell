#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input = NULL;
	size_t lenght = 0;
	size_t numberRead;
	while (1)
	{
		printf("$ ");
		numberRead = getline(&input, &lenght, stdin);
		if (numberRead == -2)
		{
			printf("error");
			free(input);
			return (-2);
		}
		printf("My input is %s", input);
	}
	free(input);
	return (0);
}
