#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(my_shell) $ ";
	char *lineptr;
	size_t n = 0;
	(void)ac;
	(void)argv;/* declaring void variables */

	printf("%s", prompt);

	getline(&lineptr, &n, stdin);/*passes the variables to the getline function*/
	printf("%s\n", lineptr);/*Enables us get what the user types in*/
	free(lineptr);/*free memory, whether d function execution succeeds or fails*/
	return (0);
}
