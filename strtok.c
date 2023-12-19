/**
 * strtok(string, delimitor)
 * strtok("Doing hard things", " ")
 * Doing string -> "hard things"
 * hard string -> "things"
 * things string -> ""
 * NULL
 */
#include <string.h>
#include <stdio.h>

void print_tokens(char str[], char *delim)
{
	char *token = strtok(str , delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	printf("Finished\n");
}

int main(void)
{
	char s[] = "Doing hard things";
	print_tokens (s, " ");
	print_tokens("Doing,hard,things", " ,");
	print_tokens("ABC", "ABC");
	print_tokens("    ", " ,");
	return (0);
}
