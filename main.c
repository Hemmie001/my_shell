#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(my_shell) $ ";
	char *lineptr;
	size_t n = 0;
	printf("%s", prompt);
   	getline(&lineptr, &n, stdin);/*passes the variables to the getline function*/
	free(lineptr);
	return (0);

}
